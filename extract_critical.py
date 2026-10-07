#!/usr/bin/env python3
"""
Extract critical hardware details for NuttX MVP port:
- UART baud clock source
- IRQ numbers from ISR table
- LCDC init register sequence
- NAND partition info
"""

import os, re
from pathlib import Path

ROOT = Path(r"C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\decompiled\bin-c")

def grep_file(path, pattern, max_results=10):
    """Search file and return first max_results matches with line numbers."""
    hits = []
    try:
        with open(path, "r", errors="ignore") as f:
            for i, line in enumerate(f, 1):
                if re.search(pattern, line, flags=re.IGNORECASE):
                    hits.append((i, line.strip()))
                    if len(hits) >= max_results:
                        break
    except Exception as e:
        hits.append((0, f"error: {e}"))
    return hits

def main():
    print("=" * 60)
    print("EXTRACTING CRITICAL HARDWARE DETAILS FOR NUTTX MVP")
    print("=" * 60 + "\n")
    
    # 1. UART baud clock - search for clock divider/mux registers
    print("1. UART BAUD CLOCK SOURCE & DIVISOR")
    print("-" * 40)
    # Look for clock register that controls UART clock
    for pattern in [
        "0x20c00000",      # the MMIO block we already found
        "clk_uart|uart_clk|ahb_clk|pclk_uart",
        "0x19",            # value written to 0x20c00000 (might be enable)
        "FUN_000853ee",    # function that seems to write to MMIO
        "baud_div|baudrd|div|baud",
    ]:
        # Search in likely files
        for fname in ["boot0.c", "fdl1.c", "kernel.c", "img_90000024.c"]:
            fpath = ROOT / fname
            if fpath.exists():
                hits = grep_file(fpath, pattern, max_results=3)
                if hits and hits[0][0] > 0:
                    for ln, txt in hits[:2]:
                        print(f"  {fname}:{ln} - {txt[:150]}")
                    break  # Found in one file, move to next pattern
    print()
    
    # 2. LCDC init sequence
    print("2. LCDC/GC9106 INIT SEQUENCE (key registers)")
    print("-" * 40)
    for pattern in [
        "GC9106_Init",
        "lcdc_drv_ums9117",
        "s__uint32__LCDC_IRQ_NUM",
        "FUN_000006c8",   # function that seems to write registers
        "0x17053",        # approximate line number area
    ]:
        for fname in ["img_90000024.c", "kernel.c"]:
            fpath = ROOT / fname
            if fpath.exists():
                hits = grep_file(fpath, pattern, max_results=2)
                if hits and hits[0][0] > 0:
                    for ln, txt in hits[:2]:
                        print(f"  {fname}:{ln} - {txt[:120]}")
                    break
    print()
    
    # 3. IRQ table / ISR numbers
    print("3. INTERRUPT TABLE / ISR NUMBERS")
    print("-" * 40)
    # The ISR table seems to go up to 0x80 (128 entries)
    # Look for the table pattern and IRQ numbers
    for pattern in [
        "s__i_<_MAX_ISR_NUM",    # table size symbol
        "s_gic_phy_c",           # GIC related
        "IRQ_NUM",               # IRQ number references
        "logicNum",              # logic number for GIC
        "0x80",                  # max IRQ number
    ]:
        for fname in ["kernel.c", "boot0.c", "fdl2.c"]:
            fpath = ROOT / fname
            if fpath.exists():
                hits = grep_file(fpath, pattern, max_results=3)
                if hits and hits[0][0] > 0:
                    for ln, txt in hits[:2]:
                        print(f"  {fname}:{ln} - {txt[:120]}")
                    break
    print()
    
    # 4. NAND partition info
    print("4. NAND GEOMETRY & PARTITIONS")
    print("-" * 40)
    for pattern in [
        "NAND_CMD|NAND_ADDR|NAND_DATA",
        "bch|ecc|oob|out-of-band",
        "partition|part_tab|part_",
        "flash_erase|block_mark",
    ]:
        for fname in ["fdl2.c", "boot0.c"]:
            fpath = ROOT / fname
            if fpath.exists():
                hits = grep_file(fpath, pattern, max_results=2)
                if hits and hits[0][0] > 0:
                    for ln, txt in hits[:1]:
                        print(f"  {fname}:{ln} - {txt[:120]}")
                    break
    print()
    
    # 5. GPIO/Pinmux for key functions
    print("5. GPIO/PINMUX FOR UART/ LCD / POWER")
    print("-" * 40)
    for pattern in [
        "GPIO_GD|GPIO_SWPFG|GPIO_SR",
        "FUN_0000019c|sio_port_port_init",
        "ANA_Read|adi_reg_read",
        "vddsdio|vddrfa|dcdcarm",
    ]:
        for fname in ["cm4_a.c", "cm4_b.c", "boot0.c"]:
            fpath = ROOT / fname
            if fpath.exists():
                hits = grep_file(fpath, pattern, max_results=2)
                if hits and hits[0][0] > 0:
                    for ln, txt in hits[:1]:
                        print(f"  {fname}:{ln} - {txt[:120]}")
                    break
    print("\n" + "=" * 60)
    print("EXTRACTION COMPLETE")
    print("=" * 60)

if __name__ == "__main__":
    main()