# מפת חומרה ראשונית לצורך BSP / מערכת הפעלה

> סטטוס: מיפוי סטטי ראשוני מתוך קושחת PAC שעברה דה־קומפילציה ב־Ghidra.  
> יעד מזוהה: **UNISOC/Spreadtrum UMS9117**.  
> המיפוי אינו Datasheet ואינו מספיק עדיין להפעלה בטוחה על חומרה אמיתית. כתובות ותפקידי רגיסטרים שלא הוכחו מסומנים בהתאם.

## 1. תקציר מנהלים

הקושחה שייכת לפלטפורמת טלפון משובץ המבוססת על SoC ממשפחת UNISOC/Spreadtrum, עם זיהוי ישיר של **UMS9117** מתוך שם דרייבר ה־LCDC. המעבד הראשי הוא ARM ‏32-bit בעל CP15, MMU, מטמונים, TLB ומצבי חריגה ARM קלאסיים. קיימות גם שתי תמונות בשם `cm4_a` ו־`cm4_b`, המעידות על תת־מערכת Cortex-M4 נפרדת או חלוקה לשני רכיבי קושחה עבור ליבת M4.

תמונת האתחול מאתחלת LPDDR3, משתמשת ב־NAND, תומכת במסלולי הורדה דרך UART ו־USB, ומכילה בחירה בין UART ל־JTAG. תמונת הלוח `img_90000024` כוללת דרייברים עבור LCDC, מסך SPI, ‏GPIO, ‏SPI, ‏DMA, watchdog, RTC, timer, ADI ומסילות מתח. בקר המסך מזוהה כ־**GC9106**.

### רמת בשלות נוכחית

- **מספיק להתחלת מחקר BSP ואמולטור מוקדם:** כן.
- **מספיק ל־UART hello-world על המכשיר:** עדיין לא; חסרים base address, clock gate, pinmux ו־baud divisor מאומתים.
- **מספיק לאתחול DRAM עצמאי:** לא; יש קוד training אך טרם שוחזרה טבלת הרגיסטרים והסדר המדויק.
- **מספיק לכתיבת מערכת הפעלה מלאה:** לא; דרושים מיפוי MMIO, פסיקות, clocks, pinmux ותיעוד NAND מדויקים.

## 2. מקורות ודרגות ודאות

| דרגה | פירוש |
|---|---|
| גבוהה | מחרוזת/שם דרייבר או שימוש ישיר ועקבי בקוד |
| בינונית | מסקנה חזקה ממבנה הקוד או משמות המחיצות |
| נמוכה | השערה שדורשת אימות בינארי או בדיקה על המכשיר |

מקורות עיקריים:

- `decompiled/bin-c/boot0.c` — שלב אתחול מוקדם, CPU/MMU/cache, LPDDR3, NAND ו־UART/JTAG.
- `decompiled/bin-c/boot1.c` — אימות/טעינת תמונת kernel והמשך שרשרת האתחול.
- `decompiled/bin-c/fdl1.c`, `fdl2.c` — Download Loader, DRAM, NAND, UART ו־USB.
- `decompiled/bin-c/img_90000024.c` — קוד BSP/לוח: תצוגה, SPI, GPIO, DMA, watchdog ומסילות מתח.
- `decompiled/bin-c/kernel.c` — מערכת ההפעלה/RTOS והדרייברים המלאים.
- `decompiled/bin-c/cm4_a.c`, `cm4_b.c` — קושחת תת־מערכת M4/תקשורת.
- `original/*.bin` — התמונות המקוריות לצורך אימות offsets וניתוח חוזר.

## 3. SoC וארכיטקטורת CPU

| רכיב | ממצא | ודאות | ראיה |
|---|---|---:|---|
| SoC | UNISOC/Spreadtrum **UMS9117** | גבוהה | `img_90000024.c:14663` ואילך: `lcdc_drv_ums9117.c`; מופיע גם ב־`kernel.c:34954` ואילך |
| ISA ראשית | ARM ‏32-bit, ממשק CP15 | גבוהה | `boot0.c:29-31` — Control ו־Coprocessor Access Control |
| MMU | קיים ומשמש בפועל | גבוהה | `boot0.c:6428-6462` — TLB, TTBR0/TTBR1, TTBCR ו־Domain Access Control |
| Cache | I-cache ו־D-cache עם invalidate/clean | גבוהה | `boot0.c:6302-6421` |
| חריגות | Reset/SVC/IRQ ו־software interrupt | גבוהה | `boot0.c:54-58`, `boot0.c:210`, `boot0.c:6260` |
| ליבת עזר | Cortex-M4 או תת־מערכת המכונה CM4 | בינונית-גבוהה | המחיצות `cm4_a.bin`, `cm4_b.bin`; קוד RTOS/ThreadX ב־`cm4_a.c` |
| DSP | DSP לתקשורת GGE | גבוהה | המחיצה `dsp_gge.bin` |

### מסקנה עבור פורט מערכת הפעלה

יעד ה־bootstrap הראשי צריך להיות ARM 32-bit עם vector table קלאסי, התחלה כאשר MMU/cache כבויים או במצב שה־bootloader משאיר. לפני הפעלת MMU עצמאית יש לשחזר את מפת ה־RAM וה־device regions. אין לקבע דגם Cortex-A מדויק לפני קריאת MIDR מהבינארי/מכשיר.

## 4. שרשרת האתחול

שרשרת סבירה על בסיס שמות המחיצות והקוד:

1. ROM פנימי של ה־SoC.
2. `boot0.bin` — אתחול מוקדם, בחירת UART/JTAG, PMIC/ADI, clocks, LPDDR3 ו־NAND.
3. `boot1.bin` — טעינה/בדיקה של תמונות נוספות ושל kernel.
4. טעינת `kernel.bin`, תמונות CM4/DSP, משאבים ו־NV.
5. הפעלת מערכת MOCOR/RTOS ויישום המשתמש.

ראיות:

- `boot0.c:3243` — הדפסת `boot0 UART/JTAG mode` ושינוי רגיסטר בהתאם למצב.
- `boot0.c:2798-2848` — רצף DDR init וסיום מוצלח.
- `boot0.c:5012-5020` — LPDDR3 read/write data-eye training.
- `boot0.c:2573-2657` — קריאת NAND ID והתאמת פרמטרים.
- `boot1.c:2691-2702` — בדיקת magic של תמונת kernel.
- `fdl2.c:3340-3407` — פתיחת NANDCTL, קריאת ID ואתחול NAND.
- `fdl2.c:7174`, `fdl2.c:7207` — מסלולי UART ו־USB בפרוטוקול ההורדה.

### Secure boot

ב־`boot0.c` קיימות מחרוזות כגון `key_cert_hash_verify_fail` וקוד לטיפול ב־secure header. לכן יש להניח שקיים מסלול Secure Boot או לפחות אימות תמונות. לא הוכח אם הוא פעיל בגרסת המכשיר. מערכת הפעלה חלופית עשויה להזדקק לטעינה דרך נתיב FDL/בדיקה חתומה או ניצול bootloader קיים, ולא בהכרח תוכל להחליף תמונה חתומה ישירות.

## 5. זיכרון

### 5.1 DRAM

| מאפיין | ממצא | ודאות |
|---|---|---:|
| סוג | LPDDR3 | גבוהה |
| בקר | DMC עם training | גבוהה |
| base address | טרם הוכח | — |
| גודל | טרם הוכח | — |

ראיות LPDDR3: `boot0.c:5012-5020` ו־`fdl1.c:2810-2818`.

הכתובת `0x30000000` מופיעה בקוד אתחול ה־DMC (`boot0.c:4886`) ובקרבת רגיסטרים רבים בטווח `0x30000200-0x30000230`. לכן הטווח `0x30000000` הוא **מועמד חזק לבלוק רגיסטרי DMC/DDR PHY**, ולא בסיס RAM. אין למפות אותו כזיכרון רגיל.

### 5.2 MMIO שנצפה ישירות

| טווח/כתובת | שימוש משוער | ודאות | ראיה |
|---|---|---:|---|
| `0x30000000` | DMC/DDR PHY base או בלוק כיול | בינונית-גבוהה | `boot0.c:4886` ובהקשר LPDDR3 training |
| `0x3000012C` | רגיסטר מצב/בחירת lane ב־DDR PHY | בינונית | `boot0.c:4516`, `4528` |
| `0x30000200-0x30000230` | מערך רגיסטרי training/config של DDR PHY | גבוהה לטווח, בינונית לפירוש | `boot0.c:4333-4345`, `4516-4545` |
| `0x21A00220` | רגיסטר MMIO שנצפה באתחול | נמוכה | קבוע חוזר ב־boot/FDL; התפקיד טרם שוחזר |
| `0x20800110`, `0x20800114` | רגיסטרי MMIO שנצפו | נמוכה | קבועים בקוד אתחול; התפקיד טרם שוחזר |

> אזהרה: קבועים כגון `0x40000000`, `0x80000000`, `0xC0000000` מופיעים לעיתים קרובות כמסכות ביטים ולא בהכרח ככתובות.

### 5.3 MMU

`boot0.c:6434-6462` מראה תכנות SCTLR, ‏TTBCR, ‏TTBR1, ‏TTBR0 ו־DACR. לצורך BSP יש לשחזר את טבלת העמודים המקורית דרך הערך שמוזן ל־TTBR0 ואת הפונקציה שבונה אותה. זה עשוי לחשוף ישירות את חלוקת RAM מול MMIO.

## 6. אחסון ומחיצות

האחסון הראשי הוא **NAND raw** עם NAND controller ייעודי. קיימות גם מסילות `vddsdio` ו־`vddemmccore`, ולכן ה־SoC/לוח תומך ב־SDIO/eMMC, אך לא הוכח ש־eMMC הוא אמצעי האתחול של המכשיר הזה.

| תמונה | גודל בתים | גודל Hex | תפקיד משוער |
|---|---:|---:|---|
| `boot0.bin` | 30,516 | `0x7734` | boot מוקדם |
| `boot1.bin` | 72,292 | `0x11A64` | boot שני |
| `fdl1.bin` | 32,596 | `0x7F54` | downloader שלב 1 |
| `fdl2.bin` | 87,012 | `0x153E4` | downloader/NAND שלב 2 |
| `cm4_a.bin` | 55,500 | `0xD8CC` | קושחת CM4 A |
| `cm4_b.bin` | 463,468 | `0x7126C` | קושחת CM4 B/מודם |
| `dsp_gge.bin` | 2,654,208 | `0x288000` | DSP סלולר |
| `img_90000005.bin` | 3,145,728 | `0x300000` | תמונת מערכת, תפקיד מדויק לא ידוע |
| `img_90000024.bin` | 166,064 | `0x288B0` | BSP/לוח/תצוגה |
| `kernel.bin` | 12,523,684 | `0xBF18A4` | kernel/RTOS |
| `mmi_res.bin` | 35,494,988 | `0x21D9C4C` | משאבי ממשק משתמש |
| `nvitem.bin` | 744,312 | `0xB5B78` | פריטי NV/כיול |
| `user.bin` | 9,331,028 | `0x8E6154` | יישום משתמש |
| `hw_ver.bin` | 56 | `0x38` | טבלת גרסאות חומרה |

`hw_ver.bin` מכיל את המזהים `hw_ver00` ו־`hw_ver02`. יש לתמוך לפחות בשתי וריאציות לוח או בשתי רשומות זיהוי.

## 7. פסיקות, טיימרים ו־watchdog

| רכיב | מצב | ודאות | ראיה |
|---|---|---:|---|
| IRQ exception | קיים | גבוהה | `boot0.c:210` |
| בקר פסיקות | קיים אך דגם/base/IRQ map לא שוחזרו | בינונית | דרייברים ו־IRQ numbers בקוד; אין טבלה שמית מלאה עדיין |
| system timers | `timer_phy.c`, `timer_hal.c` | גבוהה | מחרוזות מקור בדרייברים |
| RTC | `rtc_phy.c` | גבוהה | מחרוזת מקור בדרייבר |
| watchdog | `watchdog_hal.c` | גבוהה | `img_90000024.c:3559-3684` |
| DMA | `dma_phy.c`, `dma_hal.c`, `hal_dma1.c` | גבוהה | מחרוזות מקור בדרייברים |

לפורט ראשוני יש לשחזר לפי הסדר: interrupt controller base, מספר IRQ של UART, timer ו־LCDC, ולאחר מכן timer frequency ו־ack/clear semantics.

## 8. UART, USB ו־Debug

- קיימת בחירה מוקדמת בין **UART** ל־**JTAG** (`boot0.c:3243`).
- דרייבר `sio_uart.c` קיים במערכת.
- `fdl2` תומך בתעבורה דרך UART ובנפרד דרך USB, עם בדיקות CRC (`fdl2.c:7174`, `7207`).
- קיימת שכבת `hci_transport_uart.c`, כנראה לתעבורת Bluetooth HCI.

חסר לצורך console ראשון:

1. UART instance הפעיל.
2. base address.
3. clock source ו־divider.
4. pinmux של TX/RX.
5. FIFO/status register layout.
6. האם boot ROM/boot0 משאיר את UART פעיל ובאיזה baud.

הדרך הבטוחה ביותר ל־bring-up היא לשמר את מצב ה־bootloader ולנסות שידור polling מינימלי רק לאחר שחזור פונקציית ה־putchar שלו.

## 9. GPIO, pinmux ו־ADI/PMIC

- דרייברים `gpio_phy.c`, `gpio_prod.c` ו־`gpio_ext_drv.c` קיימים.
- `img_90000024.c:9494` מראה תרגום GPIO ID והפעלת GPIO.
- ADI מופיע ב־boot0 ובתמונות CM4; קיימות פעולות `ANA_Read` ובדיקת כתובת analog die (`cm4_a.c:5487-5526`).
- המשמעות הסבירה: רכיבי PMIC/analog נגישים דרך ממשק Spreadtrum ADI ולא דרך MMIO רגיל בלבד.

מסילות מתח שנמצאו ב־`img_90000024.c`:

- `vddusb`
- `vddsdio`
- `vddemmccore`
- `vddrfa1v8`
- `dcdcarm`

לפני גישה למסך, SDIO, USB או RF יש לשחזר את רצף regulator enable ואת ADI base/protocol.

## 10. תצוגה

| רכיב | ממצא | ודאות |
|---|---|---:|
| בקר תצוגה | LCDC ייעודי ל־UMS9117 | גבוהה |
| ממשק פאנל | SPI | גבוהה |
| בקר LCD | **GC9106** | גבוהה |
| שכבות | image + OSD1, תמיכה ב־Y/UV ובפורמטים מרובים | גבוהה |
| chip select | מנוהל דרך GPIO/pin abstraction | גבוהה |
| רזולוציה | טרם שוחזרה | — |

ראיות:

- `img_90000024.c:14663-14907` — `lcdc_drv_ums9117.c`.
- `img_90000024.c:10218` — `lcd_if_spi.c` ו־CS pin.
- `img_90000024.c:12159-12368` — שכבות LCDC, כתובות Y/UV, alignment ו־OSD1.
- `img_90000024.c:17053-17067` — `GC9106_Init` ו־sleep handling.
- `kernel.c:1762960` — קוד ESD עבור GC9106.

דרישות דרייבר עתידי:

1. power rails ו־reset GPIO.
2. SPI bus instance, mode, frequency ו־CS.
3. רצף האתחול של GC9106.
4. LCDC base, IRQ, clock ו־DMA.
5. framebuffer format, stride ורזולוציה.
6. backlight GPIO/PWM (`lcd_backlight.c` קיים).

## 11. אוטובוסים וציוד היקפי

| ממשק | מצב ראיות | הערה |
|---|---|---|
| SPI | גבוהה | `spi_phy_v5.c`, `spi_hal.c`; DMA, IRQ ו־timer עבור RX |
| I2C | גבוהה | `i2c_phy.c`, `i2c_hal.c` |
| GPIO | גבוהה | דרייברי PHY/product/external |
| USB | גבוהה | downloader ושירותי USB |
| SDIO | בינונית-גבוהה | מסילת `vddsdio`; נדרש לזהות controller בפועל |
| eMMC | בינונית | מסילת `vddemmccore`; האתחול שנצפה הוא NAND |
| RTC | גבוהה | `rtc_phy.c` |
| PWM | בינונית | סביר עבור backlight/ציוד היקפי; טרם נמצא base מאומת |
| keypad/keys | בינונית | קוד ממשק משתמש וקלט קיים, אך controller/pin map טרם שוחזרו |

## 12. שמע ורדיו

קיימת תשתית שמע רחבה:

- `apm_codec.c`
- `audio_input.c`, `audio_output.c`, `audio_stream.c`
- התאמות codec עבור uplink/downlink/DSP
- נתוני NV לשמע ARM ו־DSP

קיימות גם תשתיות סלולר/RF, ‏WCDMA/GGE, ‏DSP ותעבורת HCI UART. אין די ראיות כרגע לקבוע את דגם ה־audio codec, רכיב Bluetooth/Wi-Fi או מפת RF. חלק מהפונקציות עשויות להיות משולבות ב־SoC/analog die.

## 13. מערכת ההפעלה המקורית

המחרוזות מצביעות על **MOCOR** ועל שימוש ב־**ThreadX** לפחות בתת־מערכת CM4 (`RTOS/source/.../threadx...` ב־`cm4_a.c`). `kernel.bin` הוא kernel/RTOS קנייני ולא Linux רגיל. הדבר שימושי משום שמבני HAL ודרייברים נשמרו כמחרוזות שמות קובצי מקור.

## 14. פריטי מידע שעדיין חסרים

אלו החסמים העיקריים לפני כתיבת BSP עובד:

- דגם ליבת ה־ARM הראשית ומזהה MIDR מדויק.
- בסיס וגודל ה־DRAM בפועל.
- כל מפת MMIO של UMS9117.
- base ו־register layout של UART.
- interrupt controller, מספרי IRQ ו־priority/ack semantics.
- clock/reset controller ומקורות השעון.
- pinmux/pad controller.
- ADI/PMIC register map.
- NAND geometry, ECC, bad-block policy ומפת offsets פיזית במחיצה.
- base/IRQ/clock של timer, GPIO, SPI, I2C, DMA, USB ו־LCDC.
- רזולוציית המסך וה־framebuffer format הסופי.
- מפת כפתורים, סוללה/charger, audio codec וחיישנים.
- סטטוס Secure Boot ופורמט החתימה.

## 15. תוכנית bring-up מומלצת

1. **לשחזר entry points וכתובות טעינה** מכל BIN באמצעות headers, vector tables ו־PAC metadata.
2. **לזהות MIDR ו־memory map** מתוך קוד MMU וטבלת העמודים של boot0/boot1.
3. **לשחזר putchar של boot0** ולבנות UART polling driver בלי לשנות clocks/pinmux.
4. **להשתמש ב־DRAM שכבר אותחל בידי bootloader**; לא לכתוב DDR init חדש בשלב הראשון.
5. **להביא timer ו־IRQ בסיסיים** לאחר זיהוי interrupt controller.
6. **להוסיף NAND read-only** לפני כל כתיבה; לשמר ECC ו־bad blocks.
7. **להוסיף GPIO/SPI ואת GC9106** רק לאחר power/pinmux בטוחים.
8. להפעיל CM4/DSP/מודם רק לאחר הבנת shared memory, mailbox ו־firmware loading.
9. להשאיר כתיבה ל־NAND, PMIC ו־RF מחוץ ל־MVP עד לאימות מלא על לוח בדיקה.

### יעד MVP ריאלי

- boot דרך bootloader הקיים;
- כניסה לקוד עצמאי ב־ARM הראשי;
- UART console;
- timer tick;
- RAM allocator;
- exception/IRQ diagnostics;
- framebuffer פשוט או SPI direct למסך;
- NAND read-only.

## 16. הערות בטיחות

- אין לבצע כתיבה ניסיונית ל־NAND לפני גיבוי מלא ואימות ECC/OOB.
- כתיבה שגויה ל־PMIC/ADI עלולה לגרום לכיבוי, התחממות או נזק.
- הפעלת RF ללא רצפי כיול ורגולציה מתאימים אינה חלק מ־bring-up בסיסי.
- יש להשתמש בספק כוח מוגבל זרם, UART מבודד ונקודת recovery מוכחת.
- כל כתובת MMIO לא מאומתת צריכה להיבדק תחילה מול קוד מקורי, trace או dump קריאה בלבד.

## 17. קבצי עזר שנוצרו בזמן הניתוח

- `bsp_symbol_hits.json` — תוצאות חיפוש סמלי חומרה.
- `bsp_evidence.txt` — ממצאי פלטפורמה ודרייברים.
- `bsp_contexts.txt` — הקשרים סביב ראיות BSP.
- `platform_identity.txt` — חיפושי זהות פלטפורמה/לוח.

קבצים אלה הם חומר עזר בלבד; המסקנות המסוננות נמצאות במסמך זה.
