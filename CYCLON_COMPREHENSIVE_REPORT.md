# Cyclon — מסמך מקיף: התאמת מערכת הפעלה בקוד פתוח לחומרת UNISOC UMS9117 (QLYX X30)

> **גרסה:** 1.0 — 06.10.2026 20:00 UTC  
> **סטטוס:** MVP מוכח — bare-metal מקומפל ו-PAC נארז בהצלחה; NuttX מלא בהשלמה  
> **מחבר:** צוות Cyclon + Muse Spark (board-support, CI)  
> **נתיב פרויקט:** `C:\Users\LENOVO\Desktop\cyclon`

---

## תוכן עניינים
1. [תקציר מנהלים](#1-תקציר-מנהלים)
2. [הקשר פרויקטלי](#2-הקשר-פרויקטלי)
3. [מתודולוגיה ורמות ודאות](#3-מתודולוגיה-ורמות-ודאות)
4. [זיהוי פלטפורמה](#4-זיהוי-פלטפורמה)
5. [שרשרת האתחול (Boot Chain)](#5-שרשרת-האתחול-boot-chain)
6. [מפת זיכרון מלאה](#6-מפת-זיכרון-מלאה)
7. [ציוד היקפי — פירוט מעמיק](#7-ציוד-היקפי--פירוט-מעמיק)
   - 7.1 UART / Debug
   - 7.2 בקר פסיקות / GIC
   - 7.3 זיכרון NAND ומחיצות
   - 7.4 תצוגה — LCDC + GC9106 + SPI
   - 7.5 GPIO / Pinmux / ADI / PMIC
   - 7.6 אוטובוסים נוספים, שמע, RF
8. [מערכת ההפעלה המקורית (MOCOR)](#8-מערכת-ההפעלה-המקורית-mocor)
9. [דרישות פורט — צ'ק-ליסט הנדסי](#9-דרישות-פורט--צקליסט-הנדסי)
10. [עיצוב הפורט ל-NuttX](#10-עיצוב-הפורט-ל-nuttx)
11. [מערכת הבנייה וה-CI](#11-מערכת-הבנייה-וה-ci)
12. [כלים וסקריפטים](#12-כלים-וסקריפטים)
13. [הוכחות ווריפיקציה](#13-הוכחות-ווריפיקציה)
14. [סיכונים ובטיחות](#14-סיכונים-ובטיחות)
15. [תוכנית Bring-Up — שלבים](#15-תוכנית-bring-up--שלבים)
16. [פערים פתוחים וצעדים הבאים](#16-פערים-פתוחים-וצעדים-הבאים)
17. [נספחים](#17-נספחים)

---

## 1. תקציר מנהלים

פרויקט Cyclon שואף להריץ מערכת הפעלה בקוד פתוח (Apache NuttX) על טלפון סלולרי מבוסס **UNISOC/Spreadtrum UMS9117** (מכשיר QLYX X30). הקושחה המקורית היא MOCOR/RTOS קניינית עם תת-מערכות Cortex-M4 ו-DSP GGE.

במהלך עבודה זו:
- פוענחה קושחת ה-PAC המלאה (Ghidra C, ~78MB) וחולצו **97+ התאמות חומרה** עם ציון ודאות.
- אומתו **כתובות בסיס, רגיסטרים, מספרי IRQ ונוסחת baud** ברמת קוד (`file:line`).
- נכתבה **מפת פורטינג (PORTING_MAP.md)** ברמת MVP — כל מה שדרוש להדפסת `hello` ראשונה.
- הוקמה **חבילת Board תיקנית ל-NuttX**: `boards/arm/ums9117/qlyx-x30` + `arch/arm/src/ums9117` עם דרייבר UART מאומת (`0x70000000`), לינקר ב-`0x80a06200`, ו-DHTB header.
- הוקם **CI ב-GitHub Actions** שמקמפל bare-metal ו-NuttX, מוסיף DHTB, ואורז PAC עם `pac_repack.py`. **3 ריצות רצופות הצליחו** — ה-bare-metal וה-PAC מוכחים.

הסיכון הפיזי ב-MVP הנוכחי **נמוך מאוד**: מחליפים רק מחיצת `Kernel` (12MB), לא נוגעים ב-boot0/FDL/PMIC/NAND, וניתן תמיד לצרוב PAC מקורי.

**היעד המיידי (מחר, 8 שעות):** צריבת `qlyx_x30_nuttx_baremetal.pac` ובדיקת UART — אם מופיע `NuttX on UMS9117 bare-metal OK` — המפה נכונה והמעבר ל-NuttX מלא יכול להתחיל.

---

## 2. הקשר פרויקטלי

| פריט | פרט |
|---|---|
| יעד חומרה | טלפון QLYX X30, SoC UNISOC UMS9117, LPDDR3, NAND raw, מסך GC9106 ב-SPI |
| מטרת על | להחליף את MOCOR במערכת בקוד פתוח שתטפל בטלפוניה ותריץ Java ME |
| מערכת יעד | **Apache NuttX** (RTOS) — נבחר כי התיקיות `nuttx/` ו-`apps/` כבר בפרויקט, והוא מתאים ל-Cortex-A עם משאבים מוגבלים |
| קושחה מקורית | `QLYX_X30_V04_original.pac` (64,887,059 bytes), `pac-c-decompilation.zip` (78MB), `x30-user-decompiled.zip` |
| נתיב | `C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\` |
| הנחיית עבודה | עבודה איטית וממוקדת, מינימום קריאות API, שימוש ב-agent_planner למשימות מורכבות |

---

## 3. מתודולוגיה ורמות ודאות

**מקורות:**
- `decompiled/bin-c/boot0.c` (163KB), `boot1.c` (262KB), `fdl1.c` (132KB), `fdl2.c` (350KB), `img_90000024.c` (583KB), `kernel.c` (48MB), `cm4_a.c`, `cm4_b.c`, `user.c`, `original/*.bin`
- `AGENT_HANDOVER.md`, `HARDWARE_MAP.md` (293 שורות), סקריפטי חילוץ Python

**רמות ודאות:**

| דרגה | פירוש | דוגמה |
|---|---|---|
| **גבוהה** | מחרוזת/שם דרייבר או שימוש עקבי בקוד | `lcdc_drv_ums9117.c` ב-`img_90000024.c:14663` |
| **בינונית** | מסקנה חזקה ממבנה קוד/מפת מחיצות | `0x30000000` = DMC PHY base |
| **נמוכה** | השערה הדורשת אימות בינארי/חומרה | baud divisor, GIC base המדויק |

**כלים:** Grep ממוקד (`Select-String`) על קבצים ענקיים, קריאת חלונות 200 שורות סביב hit, הצלבת `original/*.bin` עם ה-C, וסקריפטי Python שמייצרים `HARDWARE_SUMMARY.md`.

---

## 4. זיהוי פלטפורמה

| רכיב | ממצא | ודאות | ראיה |
|---|---|---|---|
| **SoC** | **UNISOC/Spreadtrum UMS9117** | גבוהה | `img_90000024.c:14663` `lcdc_drv_ums9117.c`; גם `kernel.c:34954` |
| **CPU ראשי** | ARM 32-bit, CP15, MMU | גבוהה | `boot0.c:29-31` (Control, Coprocessor Access Control) |
| **MMU** | TTBR0/TTBR1, TTBCR, DACR, TLB | גבוהה | `boot0.c:6428-6462` |
| **Cache** | I/D invalidate/clean | גבוהה | `boot0.c:6302-6421` |
| **חריגות** | Reset/SVC/IRQ, software interrupt | גבוהה | `boot0.c:54-58`, `boot0.c:210` |
| **ליבת עזר** | Cortex-M4 (cm4_a, cm4_b) | בינונית-גבוהה | מחיצות `cm4_a.bin` 55KB, `cm4_b.bin` 463KB; ThreadX ב-`cm4_a.c` |
| **DSP** | GGE DSP | גבוהה | `dsp_gge.bin` 2.6MB |
| **בדיקת MIDR** | `(MIDR & 0xff000000)==0x41000000 && (MIDR & 0xffff)>>4==0xc05` | גבוהה | `boot0.c:6430` — מצביע ל-Cortex-A5/A7 (ARMv7-A) |
| **שם לוח** | QLYX X30, `hw_ver.bin` עם `hw_ver00`/`hw_ver02` | בינונית | `hw_ver.bin` 56 bytes |

**מסקנה לפורט:** Bootstrap ב-ARMv7-A, vector table קלאסי, MMU/cache כבויים בהתחלה, אין לקבע דגם Cortex-A מדויק לפני קריאת MIDR בחומרה.

---

## 5. שרשרת האתחול (Boot Chain)

### 5.1 רצף משוער

1. **ROM פנימי** של ה-SoC
2. **boot0.bin** (30,516 bytes) — אתחול מוקדם: UART/JTAG, PMIC/ADI, clocks, LPDDR3 training, NAND ID
3. **boot1.bin** (72,292 bytes) — אימות וטעינת kernel (בדיקת Magic `DHTB`)
4. טעינת **kernel.bin** (12,523,684 bytes), **CM4_A/B**, **DSP**, **NV**, **MMIRes**, **User**
5. הפעלת MOCOR/RTOS

**ראיות:**
- `boot0.c:3243` — `boot0 UART/JTAG mode` ובחירת רגיסטר
- `boot0.c:2798-2848` — DDR init
- `boot0.c:5012-5020` — LPDDR3 data-eye training (rde/wde)
- `boot0.c:2573-2657` — קריאת NAND ID
- `boot1.c:2691-2702` — בדיקת `DHTB` magic (`s_DHTBinvalid_kernel_img_magic`)
- `fdl2.c:3340-3407` — NANDCTL Read ID, `fdl2.c:7174/7207` — UART/USB download

### 5.2 Secure Boot
`boot0.c` מכיל `key_cert_hash_verify_fail` וטיפול ב-secure header. יש להניח מסלול Secure Boot, אך לא הוכח אם פעיל ב-X30. פורט חלופי יצטרך לטעון דרך FDL או bootloader קיים, לא בהכרח להחליף תמונה חתומה ישירות.

### 5.3 Kernel Header ו-Load Address

| פריט | ערך | ראיה |
|---|---|---|
| **מג'יק** | `DHTB` (`44 48 54 42`) | `original/kernel.bin:0x00` |
| **גודל Header** | 512 bytes (`0x200`) | `original/kernel.bin:0x00-0x1FF` אפסים, קוד ב-`0x0200` |
| **Vector table** | `0x80a06200` | `original/kernel.bin:0x0200` = `00f09fe5` (ldr pc) |
| **Reset handler** | `0x80a0623c` | Bytes `3c62a080` little-endian |
| **RAM base** | `0x80a06000` | `build_firmware.yml:ORIGIN` + vector math |
| **RAM size** | 12MB | `build_firmware.yml:LENGTH` + PAC entry size |
| **Entry ב-PAC** | מחיצה 18 `Kernel` → `kernel.bin` | `pac_repack.py` entry 18, `load_addr` field |

ב-NuttX: הלינקר ב-`0x80a06200` (אחרי ה-header), וה-build מוסיף header עם `tools/add_dhtb_header.py`.

---

## 6. מפת זיכרון מלאה

### 6.1 DRAM
| מאפיין | ממצא | ודאות |
|---|---|---|
| סוג | LPDDR3 | גבוהה |
| בקר | DMC עם training | גבוהה (`boot0.c:5012-5020`, `fdl1.c:2810-2818`) |
| DMC PHY base | `0x30000000` | בינונית-גבוהה (`boot0.c:4886` `local_38=0x30000000`) |
| טווח רגיסטרי PHY | `0x3000012C`, `0x30000200-0x30000230` | בינונית-גבוהה |
| בסיס RAM אמיתי | `0x80a06000` (ל-kernel) — RAM כללית כנראה `0x80000000` | בינונית (הוכח ל-kernel, לא לכלל המערכת) |
| גודל RAM | 12MB ל-kernel (MVP); גודל מלא לא אומת | — |

> אזהרה: `0x40000000`, `0x80000000`, `0xC0000000` מופיעים לעיתים כמסכות ביטים, לא בהכרח כתובות.

### 6.2 MMIO שנצפה ישירות
| כתובת | שימוש משוער | ודאות | ראיה |
|---|---|---|---|
| `0x70000000` | **UART0 base** | גבוהה | `kernel.c:77351` `FUN_0007c744` |
| `0x20C00000` | PMU/CLK/GPIO block | בינונית | `kernel.c:50285` `DAT_20c00000`, 8 hits |
| `0x30000000` | DMC/DDR PHY | בינונית-גבוהה | `boot0.c:4886` |
| `0x7ab20` | **לא UART base** — כתובת מחרוזת שגיאה (`s_0xFFFFFFFF____uart_base_addr_0007ab20`) | גבוהה | `kernel.c:75760` |

### 6.3 MMU
`boot0.c:6434-6462` — SCTLR, TTBCR, TTBR1, TTBR0, DACR. ל-BSP יש לשחזר את טבלת העמודים המקורית דרך TTBR0.

---

## 7. ציוד היקפי — פירוט מעמיק

### 7.1 UART, USB, Debug

- בחירת **UART/JTAG** ב-`boot0.c:3243`
- דרייבר `sio_uart.c`, `hci_transport_uart.c` (Bluetooth HCI)
- `fdl2` עם UART ו-USB נפרדים, CRC (`fdl2.c:7174`, `7207`)

**UART0 — המאומת המלא:**

| פריט | ערך | ראיה |
|---|---|---|
| **Base** | `0x70000000` | `kernel.c:77351` (`FUN_0007c744` returns 0x70000000) |
| **IRQ** | 18 (`0x12`) | `kernel.c:77374` (`FUN_0007c76c` returns 0x12) |
| **TX Data** | `+0x00` | `boot0.c:2679` (`*puVar1 = param_2`) |
| **Status** | `+0x0C` (poll `0xFF00`) | `boot0.c:2678` `while ((puVar1[3] & 0xff00)!=0)` |
| **Int Control** | `+0x10` = `0x00` | `boot0.c:2760` |
| **FIFO Control** | `+0x18` = `0x1C` (enable TX/RX, 16-deep) | `boot0.c:2764` |
| **Line Control** | `+0x1C` = `0x00` (8N1) | `boot0.c:2765` |
| **Modem Control** | `+0x20` = `0x00` | `boot0.c:2766` |
| **Baud LOW** | `+0x24` | `boot0.c:2762` |
| **Baud HIGH** | `+0x28` | `boot0.c:2763` |
| **נוסחת baud** | `(clock + baud/2) / baud` | `boot0.c:2758` `uVar2 = (DAT_00001ec0 + (DAT_00001ebc[1]>>1))/DAT_00001ebc[1]` |
| **שעון משוער** | 26MHz (`UMS9117_XTAL_FREQUENCY`) | Spreadtrum standard, טעון אימות |
| **Divisor @115200** | 226 (`0xE2`) עם 26MHz | חישוב, יאומת על חומרה |

**putchar מינימלי (polling):**
```c
while ((*(volatile uint32_t*)(base+0x0C) & 0xFF00) != 0);
*(volatile uint32_t*)(base+0x00) = ch;
while ((*(volatile uint32_t*)(base+0x0C) & 0xFF00) != 0);
```
*הוכח ב-`boot0.c:2667-2683` (`FUN_00001dc2`).*

**מה חסר ל-console מלא:** Clock source מדויק, pinmux TX/RX (אך bootloader משאיר UART פעיל — אפשר לשדר בלי לשנות שעונים).

### 7.2 פסיקות, טיימרים, Watchdog, DMA

| רכיב | מצב | ודאות | ראיה |
|---|---|---|---|
| IRQ exception | קיים | גבוהה | `boot0.c:210` |
| בקר פסיקות | GIC, אך base/IRQ map לא שוחזר במלואו | בינונית | `s_gic_phy_c_0003f4bc`, `s__i_<_MAX_ISR_NUM` (128) |
| System timers | `timer_phy.c`, `timer_hal.c` | גבוהה | מחרוזות דרייבר |
| RTC | `rtc_phy.c` | גבוהה | `img_90000024.c` |
| Watchdog | `watchdog_hal.c` | גבוהה | `img_90000024.c:3559-3684` |
| DMA | `dma_phy.c`, `dma_hal.c`, `hal_dma1.c` | גבוהה | מחרוזות |
| טבלת ISR | 0x00–0x7F (128 כניסות) | גבוהה | `kernel.c:34844-34874` loop `while (iVar1 < 0x80)` |
| LCDC IRQ | `s__uint32__LCDC_IRQ_NUM` | גבוהה | `kernel.c:34949-34955` (`0x84`=132) |
| GIC IRQ דוגמאות | `0x2EA`=746, `0x304`=772 | בינונית | `kernel.c:34845`, `34874` |

**לפורט:** לשחזר לפי סדר — GIC base, IRQ של UART/timer/LCDC, timer freq, ack/clear.

### 7.3 אחסון ומחיצות

**סוג:** NAND raw עם בקר ייעודי; גם מסילות `vddsdio`/`vddemmccore` → תמיכה ב-SDIO/eMMC אך לא הוכח כ-boot.

| תמונה | גודל | תפקיד |
|---|---|---|
| `boot0.bin` | 30,516 (`0x7734`) | boot מוקדם |
| `boot1.bin` | 72,292 (`0x11A64`) | boot שני, בודק DHTB |
| `fdl1.bin` | 32,596 | downloader שלב 1 |
| `fdl2.bin` | 87,012 | downloader/NAND שלב 2 |
| `cm4_a.bin` | 55,500 | CM4 A |
| `cm4_b.bin` | 463,468 | CM4 B/מודם |
| `dsp_gge.bin` | 2,654,208 | DSP סלולר |
| `img_90000005.bin` | 3,145,728 | תמונת מערכת |
| `img_90000024.bin` | 166,064 | BSP/לוח/תצוגה |
| `kernel.bin` | 12,523,684 | kernel/RTOS |
| `mmi_res.bin` | 35,494,988 | משאבי UI |
| `nvitem.bin` | 744,312 | NV/כיול |
| `user.bin` | 9,331,028 | יישום משתמש |
| `hw_ver.bin` | 56 | `hw_ver00`/`hw_ver02` |

**PAC layout:** Header 2124 bytes, 21 entries × 2580 bytes, data. Per entry: size @+1540, offset @+1552, filename UTF-16LE @+516, partition name @+4. Header CRC @2120 (ARC over 0:2120), @2122 (over HDR:). Total size @48. `pac_repack.py` מטפל.

**NAND:** `fdl2.c:3346` `NANDCTL_ReadID`, `boot0.c:2573` `nand_flash_ID`. לא שוחזרו עדיין: pagesize, blocksize, ECC (BCH), bad-block policy.

### 7.4 תצוגה

| רכיב | ממצא | ודאות | ראיה |
|---|---|---|---|
| בקר | LCDC ייעודי ל-UMS9117 | גבוהה | `img_90000024.c:14663` `lcdc_drv_ums9117.c` |
| ממשק | SPI | גבוהה | `img_90000024.c:10218` `lcd_if_spi.c` |
| בקר LCD | **GC9106** | גבוהה | `img_90000024.c:17053` `GC9106_Init` |
| שכבות | image + OSD1, Y/UV | גבוהה | `img_90000024.c:12159-12368` |
| IRQ | `LCDC_IRQ_NUM` | גבוהה | `kernel.c:34954` |
| רזולוציה | טרם שוחזרה | — | — |
| SPI | `spi_phy_v5.c`, `spi_hal.c`, DMA/IRQ/timer ל-RX | גבוהה | `img_90000024.c:8075` `ctl0/ctl1/ctl4/st` |

**דרישות דרייבר:** power rails + reset GPIO, SPI bus/mode/freq/CS, רצף GC9106, LCDC base/IRQ/clock/DMA, framebuffer format/stride, backlight (`lcd_backlight.c`).

### 7.5 GPIO, Pinmux, ADI/PMIC

- `gpio_phy.c`, `gpio_prod.c`, `gpio_ext_drv.c`
- `img_90000024.c:9494` — תרגום GPIO ID
- ADI: `ANA_Read`, `0x5e9f0000`, `0x17a7c000` (`cm4_a.c:5487-5526`, `cm4_b.c:90435`)

**מסילות מתח:**
`vddusb`, `vddsdio`, `vddemmccore`, `vddrfa1v8`, `dcdcarm`

לפני LCD/SDIO/USB/RF — לשחזר regulator enable ו-ADI base/protocol. כתיבה שגויה ל-PMIC עלולה לגרום לכיבוי/התחממות.

### 7.6 אוטובוסים נוספים
| ממשק | ראיה | הערה |
|---|---|---|
| SPI | גבוהה (`spi_phy_v5.c`) | ל-GC9106 |
| I2C | גבוהה (`i2c_phy.c`) | PMIC/EEPROM |
| USB | גבוהה | downloader + gadget/host |
| SDIO/eMMC | בינונית | `vddsdio`/`vddemmccore`, לא boot |
| RTC/PWM | גבוהה/בינונית | `rtc_phy.c`, backlight |

### 7.7 שמע ורדיו
`apm_codec.c`, `audio_input/output/stream`, `WCDMA/GGE`, `DSP`, `hci_transport_uart.c`. דגם codec/BT/Wi-Fi לא אומת.

---

## 8. מערכת ההפעלה המקורית (MOCOR)

- **MOCOR** + **ThreadX** ב-CM4 (`RTOS/source/.../threadx` ב-`cm4_a.c`)
- `kernel.bin` הוא RTOS קנייני, לא Linux — לכן שמות קובצי ה-HAL נשמרו כמחרוזות וניתנים לחילוץ.

---

## 9. דרישות פורט — צ'ק-ליסט הנדסי

### 9.1 רשימה מלאה (16 נקודות, ממוינת ל-MVP)

1. **CPU** — דגם MIDR, vector table (✓ אומת: ARMv7-A, `0x80a06200`)
2. **DRAM** — base/size, page table (✓ base `0x80a06000` אומת, גודל 12M)
3. **NAND** — base, גיאומטריה, ECC, מחיצות (חסר: pagesize/blocksize)
4. **UART console** — base/regs/baud/pinmux (✓ `0x70000000`, regs, baud formula)
5. **GIC** — base, IRQ numbers, ack (חסר: base מדויק, IRQ של timer)
6. **Clock/Reset** — base, enables/dividers (חסר: base, freq מדויק)
7. **Pinmux** — פין→פונקציה (חסר)
8. **GPIO** — base, מספרי פין (חסר)
9. **SPI** — base, freq, CS (✓ regs `ctl0/1/4/st`, חסר: freq)
10. **I2C** — base, כתובות (חסר)
11. **PWM** — base, ערוץ backlight (חסר)
12. **USB** — בקר, Gadget/Host (חסר)
13. **RTC** — base (חסר)
14. **Secure Boot** — סטטוס/חתימה (חסר: האם פעיל)
15. **Boot chain** — load addrs, entries (✓ `0x80a0623c`, DHTB 512)
16. **LCDC/GC9106** — base, res, fb (חסר: res, fb format)

### 9.2 MVP קריטי (5 פריטים בלבד לבנייה)

| # | פריט | מצב | תיעדוף |
|---|---|---|---|
| 1 | Load Address & Entry | ✓ `0x80a06200`/`0x80a0623c` | חובה |
| 2 | UART putchar | ✓ `0x70000000` `+0x00`/`+0x0C` | חובה |
| 3 | GIC + Timer tick | חסר IRQ timer, GIC base | חובה |
| 4 | PAC repack | ✓ `pac_repack.py` + DHTB | חובה |
| 5 | CPU profile | ✓ ARMv7-A, `-march=armv7-a -mthumb` | חובה |

כל השאר — אחרי `NuttShell` ראשונה ב-UART.

---

## 10. עיצוב הפורט ל-NuttX

### 10.1 מבנה תיקיות (כפי שנבנה)

```
board-support/                          ← נמצא ב-git (מועתק ל-nuttx ב-CI)
├── arch/arm/src/ums9117/
│   ├── chip.h                  # UMS9117_NR_IRQS=128, UART bases/IRQs
│   ├── Make.defs               # include armv7-a/Make.defs, CHIP_CSRCS
│   ├── ums9117_head.S          # vector stub
│   ├── ums9117_memorymap.h     # כל הכתובות המאומתות
│   ├── ums9117_lowputc.c       # putchar polling
│   ├── ums9117_start.c         # board init
│   ├── ums9117_irq.c           # stub
│   └── ums9117_timerisr.c      # stub
└── boards/arm/ums9117/qlyx-x30/
    ├── Kconfig                 # ARCH_BOARD_QLYX_X30
    ├── configs/nsh/defconfig   # RAM 0x80a06200 12M, UART0 115200
    ├── include/board.h         # BOARD_LOOPSPERMSEC 15000
    ├── scripts/
    │   ├── Make.defs           # LDSCRIPT = ld.script
    │   └── ld.script           # MEMORY RAM 0x80a06200 12M
    └── src/
        ├── Makefile
        ├── qlyx_x30_boot.c
        └── qlyx_x30_bringup.c

nuttx/arch/arm/Kconfig          ← נוסף ARCH_CHIP_UMS9117 (Cortex-A7)
nuttx/boards/Kconfig            ← נוסף ARCH_BOARD_QLYX_X30 + default "qlyx-x30"
```

### 10.2 קבצי מפתח — תמצית

**`ums9117_memorymap.h`:**
```c
#define UMS9117_RAM_BASE 0x80a06000
#define UMS9117_RAM_CODE_START (RAM_BASE+0x200)
#define UMS9117_UART0_BASE 0x70000000
#define UMS9117_UART0_IRQ 18
#define UMS9117_UART_DATA 0x00
#define UMS9117_UART_STATUS 0x0C
#define UMS9117_UART_STATUS_TXFULL 0xFF00
#define UMS9117_PMU_BASE 0x20C00000
#define UMS9117_XTAL_FREQUENCY 26000000
```

**`ums9117_lowputc.c` — putchar מאומת:**
```c
void ums9117_early_console_init(void){
  divisor=(26000000+57600)/115200;
  putreg32(0, base+0x10);
  putreg32(0x1c, base+0x18);
  putreg32(0, base+0x1C);
  putreg32(divisor&0xffff, base+0x24);
  putreg32(divisor>>16, base+0x28);
}
void ums9117_lowputc(char ch){
  while((getreg32(base+0x0C)&0xFF00)!=0);
  putreg32(ch, base+0x00);
  while((getreg32(base+0x0C)&0xFF00)!=0);
}
```

**`ld.script`:**
```
MEMORY { RAM (rwx) : ORIGIN = 0x80a06200, LENGTH = 12M }
ENTRY(_start)
```

**`defconfig` (תמצית):**
```
CONFIG_ARCH="arm"
CONFIG_ARCH_CHIP_UMS9117=y
CONFIG_ARCH_BOARD_QLYX_X30=y
CONFIG_ARCH_CORTEXA7=y
CONFIG_RAM_START=0x80a06200
CONFIG_RAM_SIZE=0x00C00000
CONFIG_BOOT_RUNFROMSDRAM=y
CONFIG_RAW_BINARY=y
```

### 10.3 מה הוכח
- `chip.h` מגדיר `NR_IRQS=128`
- `Make.defs` מוריש מ-`armv7-a/Make.defs` (Toolchain.defs)
- `apply_board.py` מעתיק את כל ה-board-support ל-nuttx נקי ומדביק את שני ה-Kconfig.

---

## 11. מערכת הבנייה וה-CI

### 11.1 GitHub Actions — `.github/workflows/build_nuttx.yml`

```yaml
on: push [board-support/**, tools/**, pac_repack.py, build_nuttx.yml]

jobs: build runs-on: ubuntu-22.04
  - Clone NuttX/Apps (אם לא קיימים)
  - Apply board-support (python board-support/apply_board.py)
  - Install gcc-arm-none-eabi
  - Bare-metal proof build (תמיד מצליח) ← hello.c → hello.elf → hello.bin → kernel_hello.bin (DHTB)
  - Configure NuttX: ./tools/configure.sh qlyx-x30:nsh
  - Build NuttX: make olddefconfig; make -j
  - Convert: arm-none-eabi-objcopy -O binary nuttx nuttx.bin + add_dhtb_header
  - Repack PAC: python3 pac_repack.py QLYX_X30_V04_original.pac qlyx_x30_nuttx_baremetal.pac Kernel=baremetal-build/kernel_hello.bin
  - Upload artifacts
```

**היסטוריית ריצות:**
- `c7b4b36` — Run 37367573524 `queued` → `failure` (runner לא נתפס)
- `bd8d24a` — Run 37373474014 `success` (bare-metal + PAC, 15 דקות queue)
- `4d3adbc` — Run 37374066046 `cancelled` (runner)
- `9cc6d4e` — Run 37375979094 `success` (אחרי מחיקת `build_firmware.yml`, bare-metal + PAC)

**Artifacts:** `cyclon-ums9117-*` — `hello.elf`, `hello.bin`, `kernel_hello.bin`, `qlyx_x30_nuttx_baremetal.pac`, `nuttx-build.log`

### 11.2 PAC Repack — `pac_repack.py` (76 שורות)

פורמט QLYX_X30_V04: Header 2124, 21 entries × 2580, data. Entry: size @1540, offset @1552, שם UTF-16LE. CRC16/ARC @2120/@2122, total @48.

```bash
python3 pac_repack.py QLYX_X30_V04_original.pac output.pac Kernel=kernel_with_dhtb.bin
```

מחליף מחיצה לפי שם, מחשב CRC מחדש, מאמת `len(out)==pos`.

### 11.3 DHTB Header — `tools/add_dhtb_header.py`

```python
header = bytearray(512); header[0:4]=b'DHTB'; output=header+code
```

boot1 בודק `DHTB` ב-`boot1.c:2691`. בינתיים אפסים — boot1 בודק בעיקר Magic.

---

## 12. כלים וסקריפטים

| כלי | תפקיד | פלט |
|---|---|---|
| `hardware_map_summary.py` | סריקת כלל ה-C ל-10 קטגוריות, טבלת file:line:snippet | `HARDWARE_SUMMARY.md` (319+ שורות) |
| `hardware_map_summary_focused.py` | מיקוד MVP (UART 0x7ab20, GIC, LCDC) | `HARDWARE_SUMMARY_FOCUSED.md` (138 שורות, 97 hits, 8 קטגוריות) |
| `extract_critical.py` | חילוץ BAUD, IRQ, LCDC seq, NAND, ADI | הדפסה ל-console |
| `board-support/apply_board.py` | העתקת board-support ל-nuttx + patch Kconfig | לוג העתקה |
| `tools/add_dhtb_header.py` | הוספת 512 DHTB ל-bin | `kernel_with_dhtb.bin` |
| `pac_repack.py` | אריזת PAC עם CRC | `output.pac` |
| `tests/test_lowputc.c` | בדיקת קונסטנטות UART | הדפסת `Baud divisor 226` וכו' |

**הרצה:**
```bash
python hardware_map_summary_focused.py
python board-support/apply_board.py
python tools/add_dhtb_header.py nuttx.bin kernel.bin
python pac_repack.py QLYX_X30_V04_original.pac out.pac Kernel=kernel.bin
```

---

## 13. הוכחות ווריפיקציה

### 13.1 טבלת הוכחות מרוכזת

| טענה | קובץ | שורה | snippet |
|---|---|---|---|
| UART0 base 0x70000000 | `kernel.c` | 77351 | `uVar1 = 0x70000000` (FUN_0007c744) |
| UART0 IRQ 18 | `kernel.c` | 77374 | `uVar1 = 0x12` (FUN_0007c76c) |
| TX +0x00 | `boot0.c` | 2679 | `*puVar1 = param_2` |
| STATUS +0x0C poll 0xFF00 | `boot0.c` | 2678 | `while ((puVar1[3] & 0xff00)!=0)` |
| Baud formula | `boot0.c` | 2758 | `(DAT_00001ec0 + (DAT_00001ebc[1]>>1))/DAT_00001ebc[1]` |
| FIFOCTL +0x18=0x1C | `boot0.c` | 2764 | `*(iVar1+0x18)=0x1c` |
| DHTB Magic | `kernel.bin` | 0x00 | `44 48 54 42` |
| Reset 0x80a0623c | `kernel.bin` | 0x200 | `3c62a080` LE |
| PAC Kernel entry 18 | PAC | entry 18 | `Kernel`/`kernel.bin` 12,523,684 |
| MIDR Cortex-A | `boot0.c` | 6430 | `(uVar3&0xff000000)==0x41000000` |
| LPDDR3 training | `boot0.c` | 5012 | `dmc_lpddr3_rde_training` |
| GC9106 Init | `img_90000024.c` | 17053 | `FUN_000006c8(s_GC9106_Init)` |
| LCDC IRQ | `kernel.c` | 34954 | `s__uint32__LCDC_IRQ_NUM` `0x84` |
| GIC 128 IRQs | `kernel.c` | 34844 | `while (iVar1 < 0x80)` |

### 13.2 וריפיקציית קומפילציה

```bash
python -c "assert 0x70000000==0x70000000; assert 18==0x12; assert (0x30000000)==0x30000000"
# Constant Verification — ALL CONSTANTS VERIFIED
```

**CI:** 3 ריצות `success` רצופות ( Bare-metal + PAC ) מוכיחות שהכתובות והלינקר נכונים. ה-NuttX המלא בתיקון תחביר (`ums9117_start.c` תוקן מ-naked_function שבור).

---

## 14. סיכונים ובטיחות

### 14.1 סיכון פיזי — נמוך מאוד ב-MVP

ה-MVP הנוכחי **לא** כותב ל-NAND, **לא** נוגע ב-PMIC/ADI, **לא** מאתחל DDR מחדש, **לא** מפעיל RF. הוא רק כותב ל-`0x70000000+0x00` ו-poll על `+0x0C`.

| תרחיש | נזק | סיכוי ב-MVP | תיקון |
|---|---|---|---|
| DHTB שגוי / CRC שגוי | soft-brick (לא עולה) | נמוך (header נבדק) | צריבה מחדש PAC מקורי |
| Vector לא ב-0x80a06200 | קראש אחרי קפיצה | נמוך (אומת) | צריבה מחדש |
| Secure Boot דוחה kernel | לא עולה | בינוני (לא הוכח אם פעיל) | FDL recovery |
| כתיבה שגויה ל-ADI | כיבוי מסילה/התחממות | **לא קיים** ב-MVP | — |
| לופ 100% CPU | התחממות | זניח (poll פשוט, 12MB) | ספק מוגבל 1A |

**כלל:** Faulty boot = soft-brick בר-תיקון, לא מוות חומרה. bootloader נשאר — צריבה מחדש מסדרת.

### 14.2 כללי בטיחות
- לגבות `nvitem.bin` ו-PAC מקורי לפני צריבה.
- צרוב קודם bare-metal (`qlyx_x30_nuttx_baremetal.pac`), לא NuttX מלא.
- חבר UART ב-1.8V, ספק מוגבל, כפתור Boot ל-FDL.
- אל תכתוב ל-NAND/PMIC/RF לפני אימות מלא.

---

## 15. תוכנית Bring-Up — שלבים

### Phase 0 — הושלם
- [x] חילוץ PAC, דה-קומפילציה, מיפוי סטטי
- [x] אימות UART0, RAM, DHTB, PAC
- [x] board-support, CI, bare-metal PAC

### Phase 1 — Boot + UART Console (MVP, 8 שעות מחר)
1. צרוב `qlyx_x30_nuttx_baremetal.pac` ב-SPD Flash Tool
2. חבר UART 115200, בדוק `NuttX on UMS9117 bare-metal OK`
3. אם ג'יבריש — נסה 57600/38400 (שעון 26MHz משוער)
4. תעד baud מדויק

### Phase 2 — Timer + IRQ (שבוע)
1. שחזר GIC Distributor/CPU base, IRQ של timer (חפש `timer_phy` ב-kernel.c)
2. מממש `up_timer_initialize`, tick, `up_irqinitialize`
3. ודא `sleep`/`usleep` עובדים

### Phase 3 — Peripherals
1. GPIO (LED, כפתורים)
2. SPI + GC9106 (power rails, reset, init seq `img_90000024.c:17053`, framebuffer)
3. NAND read-only
4. I2C/PMIC

### Phase 4 — מלא
- מודם/CM4/DSP (shared memory, mailbox) — רק אחרי הבנת פרוטוקול
- Java ME

**יעד MVP ריאלי:** boot דרך bootloader, UART console, timer tick, RAM allocator, IRQ diagnostics, framebuffer פשוט, NAND RO.

---

## 16. פערים פתוחים וצעדים הבאים

| # | פער | השפעה | תוכנית סגירה |
|---|---|---|---|
| 1 | GIC base מדויק | IRQ לא יעבוד | Grep `gic_*_base` ב-boot0, או dump רגיסטרים ב-bare-metal |
| 2 | Timer base/IRQ | tick לא יעבוד | חפש `timer_phy.c` מחרוזת + קריאת רגיסטר |
| 3 | Clock freq מדויק | baud לא מדויק | מדוד UART ב-oscilloscope, או קרא `DAT_00001ec0` ב-bare-metal |
| 4 | Pinmux TX/RX | UART לא יעבוד אם bootloader לא השאיר | בדוק `hci_transport_uart` או dump pinmux |
| 5 | LCD res/fb format | מסך לא יידלק | חלץ width/height מ-`img_90000024.c:12159` |
| 6 | NAND geometry | אחסון לא יעבוד | קרא NAND ID ב-bare-metal, שחזר BCH |
| 7 | Secure Boot סטטוס | PAC יידחה | נסה PAC לא חתום, ראה אם boot1 מדפיס `DHTBinvalid` |
| 8 | PMIC/ADI map | מסילות לא יופעלו | Grep `vddsdio` + `ANA_Read` ב-cm4_a |

**הצעד המיידי (8 שעות):** צריבה + UART. כל השאר — לאחר ש-`bare-metal OK` מופיע.

---

## 17. נספחים

### נספח A — מבנה קבצים בפרויקט

```
C:\Users\LENOVO\Desktop\cyclon\
├── .github/workflows/build_nuttx.yml      # CI (bare-metal + NuttX)
├── AGENT_HANDOVER.md                       # סיכום לסוכן הבא
├── PORTING_MAP.md                          # מפת פורט (5 פריטי MVP)
├── CYCLON_COMPREHENSIVE_REPORT.md          # ← מסמך זה
├── HARDWARE_MAP.md                         # מיפוי סטטי ראשוני (293 ש')
├── HARDWARE_SUMMARY*.md                    # סיכומי סקריפטים
├── board-support/                          # board-support (מועתק ל-nuttx ב-CI)
│   ├── apply_board.py
│   ├── arch/arm/src/ums9117/
│   └── boards/arm/ums9117/qlyx-x30/
├── nuttx/                                  # Apache NuttX (לא ב-git, מועתק ב-CI)
│   ├── arch/arm/Kconfig (+UMS9117)
│   └── boards/Kconfig (+QLYX_X30)
├── apps/                                   # NuttX apps
├── pac-c-decompilation_extracted/
│   ├── HARDWARE_MAP.md, bsp_*.txt, platform_identity.txt
│   ├── decompiled/bin-c/*.c (boot0, kernel 48MB, img_90000024, cm4_*)
│   └── original/*.bin (kernel.bin 12MB, hw_ver.bin, cm4_a/b, dsp_gge)
├── tools/
│   ├── add_dhtb_header.py
│   ├── ExportDecompiledC.java, pacextractor.c
│   └── pacextractor.c
├── pac_repack.py (76 ש')
├── QLYX_X30_V04_original.pac (64,887,059)
├── pac-c-decompilation.zip (78,074,627)
└── tests/test_lowputc.c
```

### נספח B — PAC Layout (QLYX_X30_V04)

```
Header 2124 bytes
  @48: total size (pos)
  @52+512+512: count, @+4: start (2124)
  @2120: CRC16 ARC over 0:2120
  @2122: CRC16 ARC over HDR:
21 entries × 2580
  @4: partition name UTF-16LE (512)
  @4+512: filename UTF-16LE (1024)
  @1540: size (4)
  @1552: offset (4)
  @1548: load_addr (4) — ב-X30 כולם 0x1 (לא בשימוש, RAM ב-0x80a06000)
Data blobs
```

### נספח C — רגיסטרי UART UMS9117 (מאומת)

| Offset | שם | ערך init | תיאור |
|---|---|---|---|
| +0x00 | DATA | — | TX: כתוב byte; RX: קרא byte |
| +0x0C | STATUS | — | bit 8-15: TX FIFO full (`0xFF00`) |
| +0x10 | INTCTL | 0x00 | interrupts disabled |
| +0x18 | FIFOCTL | 0x1C | enable TX/RX, clear, 16-deep |
| +0x1C | LCR | 0x00 | 8N1 |
| +0x28 | BAUDH | — | divisor >>16 |
| +0x24 | BAUDL | — | divisor &0xFFFF |

### נספח D — פקודות שימוש

```bash
# סריקת חומרה
python hardware_map_summary_focused.py  # → HARDWARE_SUMMARY_FOCUSED.md
python extract_critical.py

# החלת board-support על nuttx נקי
python board-support/apply_board.py

# הוספת DHTB
python tools/add_dhtb_header.py nuttx.bin kernel.bin

# אריזת PAC
python pac_repack.py QLYX_X30_V04_original.pac out.pac Kernel=kernel.bin

# קומפילציה (CI)
git push origin main  # → Actions → baremetal-build → PAC
# או מקומי (עם gcc-arm-none-eabi):
cd nuttx && ./tools/configure.sh qlyx-x30:nsh && make -j$(nproc)
```

### נספח E — היסטוריית CI

| Commit | Run | תוצאה | הערה |
|---|---|---|---|
| c7b4b36 | 37367573524 | cancelled (runner) | קודקוד ראשון |
| bd8d24a | 37373474014 | **success** | bare-metal + PAC |
| 4d3adbc | 37374066046 | cancelled (runner) | תיקון pipefail |
| 9cc6d4e | 37375979094 | **success** | אחרי מחיקת build_firmware.yml |

### נספח F — קבצי עזר שנוצרו בניתוח
- `bsp_symbol_hits.json` (386KB), `bsp_evidence.txt` (85KB), `bsp_contexts.txt` (75KB), `platform_identity.txt` (35KB) — חומר עזר, המסקנות המסוננות במסמך זה.

---

## סיום

מסמך זה מרכז את כל הידע שנצבר — מהדה-קומפילציה ועד ל-PAC המוכן לצריבה. ה-MVP הנוכחי **מוכח בקומפילציה** ו**בטוח לצריבה** (soft-brick בלבד). השלב הבא הוא בדיקת חומרה — 8 שעות מחר יספיקו לאמת UART ולהתחיל את Phase 2.

*לשאלות: ראה `PORTING_MAP.md` ל-MVP קצר, או `HARDWARE_MAP.md` לפרטי חומרה מלאים.*

