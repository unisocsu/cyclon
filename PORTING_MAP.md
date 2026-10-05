# PORTING_MAP.md — NuttX on UNISOC UMS9117 (QLYX X30)

## Status: Ready for NuttX Board Port

All critical data extracted and verified from decompiled firmware.

---

## 1. Verified Hardware Facts

### CPU
- Architecture: ARMv7-A (Cortex-A5/A7)
- MIDR check: `boot0.c:6430` — `(MIDR & 0xff000000) == 0x41000000`
- MMU: TTBR0/TTBR1, TTBCR, DACR configured in `boot0.c:6434-6462`
- Caches: I-cache + D-cache with invalidate/clean
- No FPU mentioned — use `-mfloat-abi=softfp` initially

### Memory Map
| Region | Address | Size | Notes |
|---|---|---|---|
| Kernel RAM | `0x80a06000` | 12 MB | Verified from vector table in kernel.bin |
| DMC/DDR PHY | `0x30000000` | — | LPDDR3 controller, NOT RAM |
| UART0 | `0x70000000` | — | APB peripheral |
| MMIO Block | `0x20C00000` | — | PMU/CLK/GPIO mixed |

### UART0 (Console)
| Register | Offset | Value/Notes |
|---|---|---|
| TX Data | `+0x00` | Write byte here |
| Status | `+0x0C` | Poll bits 8-15 = TX FIFO full |
| Int Control | `+0x10` | 0 = disabled |
| FIFO Control | `+0x18` | `0x1C` = enable TX/RX FIFOs |
| Line Control | `+0x1C` | `0x00` = 8N1 |
| Modem Control | `+0x20` | `0x00` |
| Baud Divisor LOW | `+0x24` | `(clock + baud/2) / baud` |
| Baud Divisor HIGH | `+0x28` | Upper 16 bits |

- **IRQ**: `0x12` (18 decimal)
- **Clock**: Unknown exact value, but formula confirmed in `boot0.c:2758`
- **Bootloader leaves UART active** — can use without reinit

### Boot Chain
1. `boot0.bin` → DDR init, NAND, UART/JTAG select
2. `boot1.bin` → Load kernel, verify DHTB magic
3. Kernel loaded at `0x80a06000`, entry at `0x80a0623c`
4. DHTB header = 512 bytes, then ARM vector table

### PAC Firmware Layout
- Partition 18 = "Kernel" → `kernel.bin`
- `pac_repack.py` can replace it with CRC16 verification
- Header: 2124 bytes, entries: 2580 bytes each

---

## 2. NuttX Board Port Plan

### Target Directory Structure
```
nuttx/boards/arm/ums9117/qlyx-x30/
├── Kconfig
├── defconfig
├── scripts/
│   └── ld.script
├── include/
│   └── board.h
└── src/
    ├── Makefile
    ├── ums9117_boot.c
    └── ums9117_gpio.c

nuttx/arch/arm/src/ums9117/
├── Kconfig
├── chip.h
├── ums9117_start.c
├── ums9117_irq.c
├── ums9117_lowputc.c
├── ums9117_serial.c
├── ums9117_timer.c
└── ums9117_memorymap.h
```

### Key Configuration Values
```
CONFIG_ARCH="arm"
CONFIG_ARCH_CHIP="ums9117"
CONFIG_ARCH_BOARD="qlyx-x30"
CONFIG_ARCH_CORTEXA5=y
CONFIG_ARCH_ARMV7A=y
CONFIG_RAM_START=0x80a06200    # After DHTB header
CONFIG_RAM_SIZE=0x00C00000     # 12 MB
CONFIG_UART0_BASE=0x70000000
CONFIG_UART0_IRQ=18
CONFIG_UART0_BAUD=115200
```

---

## 3. Remaining Unknowns (Non-blocking for MVP)

| Item | Impact | Workaround |
|---|---|---|
| Exact AHB/APB clock frequency | Baud rate calculation | Assume 26 MHz (Spreadtrum standard), verify on hardware |
| UART0 pinmux | TX/RX pin routing | Bootloader already configured it |
| Timer IRQ number | System tick | Search kernel.c for timer_phy references |
| GIC Distributor base | Interrupt routing | Search for GIC register writes in boot0.c |
| NAND partition table | Storage access | Use read-only mode initially |
| PMIC/ADI register map | Power management | Defer to later phase |

---

## 4. Bring-Up Sequence (MVP)

### Phase 1: Boot + UART Console (THIS SESSION)
1. Create NuttX board directory structure
2. Write `ums9117_lowputc.c` — polling UART putchar
3. Write `ld.script` — link at 0x80a06200
4. Write minimal `ums9117_start.c` — set up stack, call main
5. Build with GitHub Actions, flash via PAC repack

### Phase 2: Timer + IRQ (NEXT SESSION)
1. Find timer base and IRQ number
2. Implement GIC initialization
3. Add NuttX tick timer
4. Verify interrupt handling

### Phase 3: Peripherals
1. GPIO (for LCD backlight, buttons)
2. SPI + GC9106 LCD driver
3. NAND read-only
4. I2C for PMIC/sensors

---

## 5. Flash Procedure

```bash
# 1. Build NuttX
arm-none-eabi-cmake -B build -DBOARD=qlyx-x30
cmake --build build

# 2. Add DHTB header (512 bytes)
python add_dhtb_header.py build/nuttx.bin build/kernel.bin

# 3. Repack PAC
python pac_repack.py QLYX_X30_V04_original.pac output.pac Kernel=build/kernel.bin

# 4. Flash with SPD Flash Tool
# Load output.pac, connect device, start flashing
```

---

## 6. Evidence References

| Claim | Source File | Line(s) |
|---|---|---|
| UART0 base = 0x70000000 | kernel.c | 77351 |
| UART0 IRQ = 0x12 | kernel.c | 77374 |
| TX register = +0x00 | boot0.c | 2679 |
| Status register = +0x0C | boot0.c | 2678,2681 |
| Baud divisor = (clk+baud/2)/baud | boot0.c | 2758 |
| FIFO control = 0x1c | boot0.c | 2764 |
| Line control = 0x00 (8N1) | boot0.c | 2765 |
| DHTB magic | kernel.bin | offset 0x00 |
| Reset vector = 0x80a0623c | kernel.bin | offset 0x200 |
| PAC partition "Kernel" | QLYX_X30_V04_original.pac | entry 18 |
| ARMv7-A MIDR check | boot0.c | 6430 |
| LPDDR3 training | boot0.c | 5012-5020 |
| GC9106 LCD init | img_90000024.c | 17053 |
| LCDC IRQ reference | kernel.c | 34949-34955 |
