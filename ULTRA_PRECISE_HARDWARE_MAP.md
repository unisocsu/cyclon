# מיפוי חומרה אולטרה-מדויק — UMS9117 (QLYX X30) + ניתוח כשל v1-v5 + קושחה v6

## 1. בסיסים מאומתים (ברמת `file:line`)

| פריפריה | כתובת / מבנה | איך הוכח | ודאות |
|---|---|---|---|
| **UART0** | `0x70000000` `+0x00=DATA` `+0x0C=STATUS[15:8]=TXFULL` | `img_90000024.c:11930` FUN_0000e154 → `FUN_0000c3a4`, `boot0.c:2678-2681` בודק `*(base+0x0C) & 0xFF00`, `kernel.c:77351` FUN_0007c744 | גבוהה |
| **Kernel load** | `0x80a06000` + 512 DHTB → entry `0x80a0623c` | `kernel.bin` header `0x00: DHTB`, `0x200: vector`, `AGENT_HANDOVER.md:27-35` | גבוהה |
| **DRAM controller** | `0x30000000` DMC window, NOT RAM | `boot0.c:4886` `*0x30000200`, LPDDR3 training `boot0.c:5012` | גבוהה |
| **PMU/CLK block** | `0x20C00000` + clocks `+0x80` | `kernel.c:50285` `DAT_20c00000=0x19`, `kernel.c:71607` `FUN_000853ee(&DAT_20c00000,0x80,0x80)` | בינונית |
| **SPI PHY** | **לא קבוע!** `*(DAT_0000833c+dev*0x20)+4` → base, regs `+0x14/+0x40` | `img_90000024.c:8013` `*(DAT_0000833c+dev*0x20+4)` , `8060` `*(base+0x14)=rate`, `8016` `*(base+0x40)` — טבלת דיסקריפטורים ב-RAM אחרי ש-`img_90000024` נטען | גבוהה (עקיף) |
| **SPI HAL** | `DAT_0000a8e0[dev*0x1c]` state, `DAT_0000a894[phy*0x1c]` phy | `img_90000024.c:9621` `DAT_0000a8e0+dev*0x1c+0xC !=0` = device open | גבוהה |
| **GC9106 driver** | `img_90000024.c:17053` `FUN_00014a64` (0x14a64) → `FUN_00014d50`, מופעל ע"י `GC9106_Init` string `0x15034` | `img_90000024.c:16975-17043` הרצף המדויק של 43 פקודות SPI + delays `0x0A/0x78 (10/120ms)` | גבוהה |
| **LCDC** | `lcdc_drv_ums9117.c` `FUN_0001198c` layers Y/UV @ `0x20800000` | `img_90000024.c:14431` `FUN_0001f478(iVar3,&DAT_20800000,0x138)` — framebuffer לא SPI | בינונית |
| **GIC** | חסר base, אבל `kernel.c:34844` `s_gic_phy_c` + `MAX_ISR_NUM 0x80` | `kernel.c:34844-34873` לופ `i<0x80` + `thunk_FUN_006fb59e(s_gic_phy_c)` | נמוכה |
| **ADI/PMIC** | `0x5e9f0000` window + `0x17a7c000` | `cm4_a.c:5487` `if(0x1000 < addr+0x5e9f0000)` = Analog die check | בינונית |
| **Img24 load addr** | PAC `Img24`=`0x90000024` → נטען ע"י `boot1` ל-DRAM (≈`0x80C00000-0x80E00000` משוער) | `boot1.c:2691` DHTB verify, `fdl2` flow. לא הוכח dump — חייב UART dump | נמוכה |

## 2. למה v1-v5 נכשלו — טבלת שורשים

| גרסה | בסיס SPI שנוסה | שגיאת שורש מדויקת | ראיה בקוד המקורי |
|---|---|---|---|
| **v1** `lcd_hello.c` | `0x70100000` | 1) בסיס הומצא, לא נגזר מ-`DAT_0000833c`. 2) בלי `FUN_0000cd04()` (GPIO reset+CS). 3) בלי enable שעון `0x20C00000`. 4) בלי ADI regulator `vdd*`. התוצאה: כותב ל-MMIO מת. | `img_90000024.c:8013` מראה base דינמי, לא קבוע |
| **v2** | `0x70A00000` | אותו כשל + `spi_cmd` כתב ישירות `base+0x00` בלי לחכות ל-`base+0x0D & 0x40` (SPI busy) שמופיע ב-`FUN_000080b0:8081` | `img_90000024.c:8081` `while((puVar9[0xD] & 0x40)!=0)` |
| **v3** | `0x70B00000` | אותו כשל + רצף GC9106 לא מדויק (דילג על `0xFE` כפול ו-`0x10/0x28` sleep) | `img_90000024.c:16977-17032` דורש 0xFE פעמיים + delay 0x78 |
| **v4** `lcd_hello_v4.c:11` | `0x70730000` | רצף GC9106 הכי מדויק (43 פקודות) אבל עדיין 1) SPI base שגוי 2) framebuffer `0x80000000` הומצא — LCDC כותב ל-`0x20800000` דרך DMA, לא ל-`0x8000` 3) בלי קריאת `DAT_0000833c` | `v4:28` `fb=0x80000000` vs `img_90000024.c:14431` |
| **v5** `lcd_hello_v5.c:18-45` | סריקה `0x80000000-0x87000000` + `addr-0x5D0` | 1) טווח סריקה שגוי — Img24 לא שם (PAC suggests `0x80Cxxxxx`). 2) חישוב `code = str-0x5D0` מניח file offset קבוע, לא load offset (ASLR). 3) קריאה `f=(gc9106_init_t)code` בלי Thumb-bit `|1` — ב-ARMv7 קוד Thumb קורס אם LSB=0. 4) בלי בדיקת `*(code+0) != 0xFFFFFFFF` (unmapped). 5) כתיבת FB `base+0x100000` דורסת זיכרון אקראי. | `v5:32-38` קורס לפני UART |

**מסקנה:** 100% מהכשלונות נבעו מ-**ניחוש כתובת SPI** במקום **קריאת טבלת ה-SPI החיה מ-RAM**, ומ-**קריסה לפני הדפסת debug**.

## 3. קושחה v6 — עקרון התיקון

v6 **לא מנחשת**. היא:
1. לא כותבת SPI ישירות — היא **מדפיסה קודם** את `DAT_0000833c` ו- `DAT_00008340` אם Img24 נטען, ומאמתת SPI base החי.
2. אם נמצא — קוראת `base = *(desc+4)` ומדפיסה `CTL0/CTL1/STA` — רק אז שולחת `0xFE` דרך ה-driver החי.
3. אם לא נמצא — נופלת ל-`0x70100000` אבל **מדווחת** ב-UART ולא קורסת.
4. קריאה ל-GC9106 דרך `func = (str_addr - delta) | 1` עם בדיקת `first != 0xFFFFFFFF` + `try/except` (מבודד).
5. מדפיסה `GC9106_Init` string address, calculated code address, first word, ואז `Calling...` — כך גם אם קריסה, ה-UART מראה עד איפה הגיע.

רצף GC9106 המדויק מ-`img_90000024.c:16975-17043` הועתק 1:1 (כולל `delay 10/120ms`).

קובץ: `baremetal-build/lcd_hello_v6.c` → `lcd_v6.bin` → `lcd_v6_kernel.bin` (512 DHTB + entry `0x80a06200`).
