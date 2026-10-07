# Sesion 1 - QLYX X30 Cyclon UMS9117

## 1. חומרה (HIGH confidence)
- SoC: UNISOC UMS9117 (T117) `lcdc_drv_ums9117.c:14663` `img_90000024.c:14663`
- LCD: GC9106 `img_90000024.c:17053` `FUN_00014a64` 43 פקודות SPI + delays 10/120ms
- LCDC FB: `0x20800000` `img_90000024.c:14431`
- UART0: `0x70000000` fifo, `0x7000000c` status `&0xFF00`
- RAM: `0x80000000` base, FDL2 `0x80100000`, FDL1 `0x6200`, clocks `0x20C00000`

## 2. PAC מקור
- `v1.0=עם סייר קבצים.pac` (64,887,059 B, 21 partitions: FDL/fdl1.bin 32596, fdl2.bin 87012, user.bin 9331028, mmi_res.bin 35494988, kernel 12523684)
- פורמט: header 2124 + 21x2580 entries, size@1540 offset@1552, CRC16 ARC @2120/2122 - `pac_repack.py:10`

## 3. FDL / BSL
- `spd_dump` UMS9117: `fdl fdl1.bin 0x6200` + `fdl fdl2.bin 0x80100000` (README spreadtrum_flash)
- תוצאה: `Custom FDL1: CHIP ID = 0x98180001` + `Custom FDL2` - מאומת
- `t117_fdl/main.c:71` `start+=0x200` skip DHTB, `data_exec` ARM call (לא Thumb)
- Workflow `.github/workflows/build-fdl2.yml:15` מזריק ל-`t117_fdl/main.c` ובונה FDL2 ב-GitHub Actions (`gcc-arm-none-eabi`)

## 4. נסיונות Hello World
- UART Hello ב-FDL2: `volatile *0x7000000c` / `*0x70000000` - עובד (BSL_REP_LOG)
- LCD fill `0x20800000` מג'נטה `0xF81F` / שחמט - נשאר שחור (LCDC לא מאותחל, צריך GC9106 + SPI + clock)
- `make_ram_hello_asm.py:1` - Keystone ARM (לא Thumb) + DHTB 512, `ldr sp,=0x80025000` חובה (אחרת `stmfd` קורס -> `no reply to cmd 0x04`)

## 5. Snake / fprun
- `SNAKE_X30_USB/prebuilt/usb_t117/snake.bin` 17456 B = DHTB 512 + code 16944, ARM entry `E3A01000`, panel `0x80009106` @0x35f8, SP@0x1C `ldr sp,[pc,#0x28]`
- `fprun.exe` דורש SPRD U2S Diag COM (לא WinUSB) - `write_data` עם spd_dump נכשל `bad checksum` כי snake מיועד ל-fphelper_t117
- ניסיון patch hex (overwrite entry לפני SP) -> קריסה; patch אחרי SP (0x80) + hello ARM loop -> עדיין `FAILED: no reply 0x04` (BSL מצפה ל-ACK)
- המסקנה: טלאי hex לא יעיל; צריך payload חדש מ-`fphelper_t117/main.c` או `t117_fdl`

## 6. PAC עם Hello מוטמע (סוף סשן)
- `tools/make_user_hello_qulyx.py:1` - PIC Thumb 336B (oem_init GC9106 + UART hellow + fb fill) + header מ-`v1.0` user.bin, pad ל-9331028
- `pac_repack.py user.bin=baremetal-build/user_hello_qulyx.bin` -> `v1.1=עם_Snake_Hello.pac` 64887059 B
- Batch: `DOWNLOAD_ARTIFACT.bat:1` (nightly.link), `RUN_ONE_CLICK_LOAD.bat:1`

## 7. קבצים מרכזיים
- `baremetal-build/ram_hello.bin` 300B, `ram_hello_fprun.bin` 812B, `snake_hello_patched2.bin` 17456B, `user_hello_qulyx.bin` 9331028B
- `HARDWARE_SUMMARY_FOCUSED.md`, `ULTRA_PRECISE_HARDWARE_MAP.md`, `CYCLON_COMPREHENSIVE_REPORT.md`
- `tools/make_user_blink_pic.py`, `add_dhtb_header.py`, `pac_repack.py`

## 8. הבא
- לאמת `v1.1` בצריבה (ResearchDownload), להוסיף קריאת תפריט ב-`mmi_res.bin` אם צריך, ולדייק GC9106 SPI init מלא.
