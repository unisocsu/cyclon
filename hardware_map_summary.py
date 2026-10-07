#!/usr/bin/env python3
"""
Hardware Mapping Summary — UNISOC UMS9117
Scans decompiled Ghidra output and produces a markdown report.
"""

import os, re, sys, json
from pathlib import Path
from collections import defaultdict

# ---- Config ----
ROOT = Path(r"C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\decompiled\bin-c")
# Patterns to search: (keyword, filename_globs_or_None, markdown_header, confidence_default)
PATTERNS = [
    # (search_term, list_of_files_or_None, markdown_header, confidence_default)
    ("MIDR|0x410|cortex", None, "1. זהות המעבד", "בינונית"),
    ("0x30000000", None, "2. בסיס DRAM", "גבוהה"),
    ("baud|115200|clock", None, "3. UART ובדואר", "בינונית"),
    ("UART|putchar|sio", None, "4. קונסולת UART", "גבוהה"),
    ("IRQ|enable_irq|0x200", None, "5. בקר פסיקות ו-IRQ", "בינונית"),
    ("SCTLR|TTBR|TTBCR", None, "6. טבלת עמודים MMU", "גבוהה"),
    ("NAND|nand_|bch|ecc", None, "7. בקר NAND ומחיצות", "בינונית"),
    ("GC9106|LCD|LCDC", ["img_90000024.c"], "8. תצוגה GC9106", "גבוהה"),
    ("GPIO|pinmux", None, "9. GPIO ופין מיקס", "בינונית"),
    ("CLK|PLL|clock", None, "10. בקר שעונים", "בינונית"),
]

# ---- Helper ----
def grep_file(path, pattern, context_lines=3):
    """Return list of (line_no, line_text) matches."""
    hits = []
    try:
        with open(path, "r", errors="ignore") as f:
            all_lines = f.readlines()
            for i, line in enumerate(all_lines, 1):
                if re.search(pattern, line, flags=re.IGNORECASE):
                    # grab surrounding lines for context
                    start = max(0, i - 1 - context_lines)
                    end = min(len(all_lines), i + context_lines)
                    snippet = " | ".join([l.strip() for l in all_lines[start:end]])
                    hits.append((i, snippet))
    except Exception as e:
        hits.append((0, f"error reading {path}: {e}"))
    return hits

def main():
    results = defaultdict(list)

    for keyword, files, header, conf in PATTERNS:
        files_to_search = files if files else []
        # If no specific files listed, scan all .c files in ROOT
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
                    for ln, snippet in hits:
                        matches.append((fname, ln, snippet))
        if matches:
            results[header] = {"confidence": conf, "matches": matches}

    # ---- Output Markdown ----
    md_lines = ["# מפת חומרה ראשונית – UNISOC UMS9117", ""]
    for header, data in results.items():
        md_lines.append(f"## {header}")
        md_lines.append(f"*וודאות:* {data['confidence']}*")
        md_lines.append("| קובץ | שורה | קטע קוד |")
        md_lines.append("|---|---|---|")
        for fname, ln, snippet in data["matches"]:
            # truncate long snippets
            snippet = snippet[:140].replace("|", "\\|")
            md_lines.append(f"| {fname} | {ln} | `{snippet}` |")
        md_lines.append("")

    out_path = Path("HARDWARE_SUMMARY.md")
    out_path.write_text("\n".join(md_lines), encoding="utf-8")
    print(f"Hardware summary created: {out_path}")

if __name__ == "__main__":
    main()