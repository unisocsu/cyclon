#!/usr/bin/env python3
"""
Hardware Mapping Summary (Focused) — UNISOC UMS9117
Scans decompiled Ghidra output for MVP porting essentials.
"""

import os, re, sys
from pathlib import Path
from collections import defaultdict

# ---- Config ----
ROOT = Path(r"C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\decompiled\bin-c")
# Focused patterns for MVP port: (keyword, filename_globs_or_None, markdown_header, confidence_default)
# Priority order matches our porting map checklist.
PATTERNS = [
    # 1. UART base address (critical for console)
    ("0x7ab20|uart_base_addr|SIO_BASE", ["kernel.c"], "1. כתובת בסיס UART לקונסולה", "בינונית"),
    ("_DAT_20c00000", ["boot0.c", "fdl1.c", "img_90000024.c", "kernel.c"], "1b. בלוק רגיסטרי בכתובת 0x20C00000", "בינונית"),
    ("baud|baud_div|clock_src", ["boot0.c", "fdl1.c"], "2. שעון ובחירת baud ל‑UART", "בינונית"),
    # 2. IRQ / Interrupt Controller
    ("IRQ_NUM|irq_enable|enable_irq", ["boot0.c", "fdl2.c"], "3. מספרי IRQ ובקר הפסיקות", "בינונית"),
    ("INTCON|GIC|interrupt_controller", None, "4. בסיס בקר הפסיקות (INTC/GIC)", "בינונית"),
    # 3. DRAM
    ("0x30000000.*DDR|DMC.*0x30000000|LPDDR3", None, "5. בסיס ופרטי DRAM/LPDDR3", "גבוהה"),
    # 4. GC9106 LCD / LCDC
    ("GC9106|LCD_init|lcdc_drv", ["img_90000024.c"], "6. תצוגה GC9106 ו‑LCDC", "גבוהה"),
    ("SPI.*LCD|LCD_SPI|spi_phy", ["img_90000024.c"], "7. אוטובוס SPI מול המסך", "בינונית"),
    # 5. NAND
    ("NAND.*ID|nand_id|bch.*ecc", ["fdl2.c", "boot0.c"], "8. בקר NAND, ID קריאה ECC", "בינונית"),
    # 6. Pinmux / PMIC
    ("pinmux|PIN_MUX|ADI", ["cm4_a.c", "cm4_b.c", "boot0.c"], "9. פין מיקס ו‑ADI/PMIC", "בינונית"),
]

# ---- Helper ----
def grep_file(path, pattern, context_lines=2):
    """Return list of (filename, line_no, snippet) matches."""
    hits = []
    try:
        with open(path, "r", errors="ignore") as f:
            all_lines = f.readlines()
            for i, line in enumerate(all_lines, 1):
                if re.search(pattern, line, flags=re.IGNORECASE):
                    start = max(0, i - 1 - context_lines)
                    end = min(len(all_lines), i + context_lines)
                    snippet = " | ".join([l.strip() for l in all_lines[start:end]])
                    hits.append((path.name, i, snippet))
    except Exception as e:
        hits.append((path.name, 0, f"error: {e}"))
    return hits

def main():
    results = defaultdict(list)

    for keyword, files, header, conf in PATTERNS:
        files_to_search = files if files else []
        if not files_to_search:
            try:
                files_to_search = [f for f in os.listdir(ROOT) if f.endswith(".c")]
            except Exception as e:
                files_to_search = []
                print(f"Warning: cannot list ROOT: {e}")

        matches = []
        for fname in files_to_search:
            fp = ROOT / fname
            if fp.exists():
                hits = grep_file(fp, keyword)
                if hits:
                    for pname, ln, snippet in hits:
                        matches.append((pname, ln, snippet))
        if matches:
            results[header] = {"confidence": conf, "matches": matches}

    # ---- Output Markdown ----
    md_lines = ["# מפת חומרה ממוקדת – UNISOC UMS9117 (MVP Port)", ""]
    for header, data in results.items():
        md_lines.append(f"## {header}")
        md_lines.append(f"*וודאות:* {data['confidence']}*")
        md_lines.append("| קובץ | שורה | קטע קוד |")
        md_lines.append("|---|---|---|")
        for fname, ln, snippet in data["matches"]:
            snippet = snippet[:150].replace("|", "\\|")
            md_lines.append(f"| {fname} | {ln} | `{snippet}` |")
        md_lines.append("")

    out_path = Path("HARDWARE_SUMMARY_FOCUSED.md")
    out_path.write_text("\n".join(md_lines), encoding="utf-8")
    print(f"Focused summary created: {out_path}\n")
    total = sum(len(v['matches']) for v in results.values())
    print(f"Found {total} matches in {len(results)} categories.\n")
    for h, d in results.items():
        print(f"  - {h}: {len(d['matches'])} matches")

if __name__ == "__main__":
    main()