# פרויקט Cyclon — סיכום מצב עבור סוכן עתידי

## תיאור הפרויקט
מטרת הפרויקט היא פיתוח מערכת הפעלה עבור טלפון המבוסס על ערכת השבבים UNISOC/Spreadtrum UMS9117. הפרויקט כולל טיפול בטלפוניה ותמיכה ביישומי Java ME.

## נתיב פרויקט
`C:\Users\LENOVO\Desktop\cyclon`

---

## מצב נוכחי (מעודכן)

### ✅ הושלם
1. **חקירת硬件**: חילוץ מלא של נתוני החומרה מתוך קושחת PAC שעברה דה-קומפילציה
2. **מפת פורטינג**: `PORTING_MAP.md` — מסמך הנדסי מלא עם ממצאים מאומתים
3. **שלד NuttX board**: נוצרה חבילת board ראשונית:
   - `nuttx/arch/arm/src/ums9117/` — דרייבר UART, startup, memory map
   - `nuttx/boards/arm/ums9117/qlyx-x30/` — defconfig, linker script
4. **GitHub Actions workflow**: `build_nuttx.yml` — מקמפל NuttX ומשלב PAC
5. **أدوات**: `add_dhtb_header.py` — מוסיף DHTB header לקומפילציה

### 📊 נתוני חומרה מאומתים
| רכיב | ערך | מקור |
|---|---|---|
| SoC | UNISOC UMS9117 | lcdc_drv_ums9117.c |
| CPU | ARMv7-A (Cortex-A) | boot0.c:6430 MIDR check |
| RAM base | 0x80a06000 (12MB) | kernel.bin vector table |
| Code start | 0x80a06200 | After 512-byte DHTB header |
| UART0 base | 0x70000000 | kernel.c:77351 (FUN_0007c744) |
| UART0 IRQ | 0x12 (18) | kernel.c:77374 (FUN_0007c76c) |
| TX Register | +0x00 | boot0.c:2679 (FUN_00001dc2) |
| Status Register | +0x0C | boot0.c:2678,2681 |
| Baud divisor | (clock+baud/2)/baud | boot0.c:2758 |
| DHTB header | 512 bytes | kernel.bin offset 0x00 |
| Reset vector | 0x80a0623c | kernel.bin offset 0x200 |
| PAC partition | "Kernel" (index 18) | PAC analysis |

### 🔧 מה נוצר בקוד
```
nuttx/arch/arm/src/ums9117/
├── chip.h                    — הגדרות chip
├── ums9117_memorymap.h      — מפת זיכרון
├── ums9117_lowputc.c        — דרייבר UART (putchar)
└── ums9117_start.c          — קוד אתחול

nuttx/boards/arm/ums9117/qlyx-x30/
├── defconfig                — הגדרות NuttX
├── scripts/ld.script        — linker script
├── include/board.h          — (טרם נוצר)
└── src/                     — (טרם נוצר)

.github/workflows/
└── build_nuttx.yml          — CI/CD workflow

tools/
└── add_dhtb_header.py       — הוספת DHTB header
```

---

## שלבים הבאים (Plan)

### Phase 1: Boot + UART Console (MVP)
1. ✅ דרייבר UART polling — `ums9117_lowputc.c`
2. ✅ Linker script — `ld.script`
3. ✅ Startup code — `ums9117_start.c`
4. ⬜ הוספת Kconfig ל-arch
5. ⬜ בדיקת קומפילציה ב-GitHub Actions
6. ⬜ הרצת בדיקת boot ראשונית

### Phase 2: Timer + IRQ
1. ⬜ איתור בסיס ה-GIC מתוך boot0.c
2. ⬜ איתור מספר IRQ של ה-timer
3. ⬜ מימוש system tick
4. ⬜ בדיקת טיפול בפסיקות

### Phase 3: Peripherals
1. ⬜ GPIO (למסך, כפתורים)
2. ⬜ SPI + GC9106 LCD driver
3. ⬜ NAND read-only
4. ⬜ I2C ל-PMIC/חיישנים

---

## הנחיות עבודה
- המשתמש מעדיף עבודה איטית וממוקדת, עם מינימום קריאות API.
- יש להשתמש ב-agent_planner לפני ביצוע משימות מורכבות כדי למנוע קריאות API מיותרות.
- כל מידע שנחקר יש לשמור בזיכרון המערכת.
- קומפילציה מתבצעת ב-GitHub Actions (אין gcc מקומית).

---

## קבצים חשובים
- `PORTING_MAP.md` — מפת הפורטינג המלאה
- `HARDWARE_SUMMARY_FOCUSED.md` — סיכום מיפוי החומרה
- `HARDWARE_MAP.md` — מיפוי חומרה ראשוני (מקורי)
- `pac_repack.py` — סקריפט אריזת PAC
- `tools/add_dhtb_header.py` — הוספת DHTB header
- `tests/test_lowputc.c` — בדיקת דרייבר UART
- `.github/workflows/build_nuttx.yml` — workflow קומפילציה
