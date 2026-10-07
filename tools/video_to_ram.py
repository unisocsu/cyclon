#!/usr/bin/env python3
"""
video_to_ram.py — הפיכת וידאו למודולי RAM עבור QLYX X30 / UMS9117

מבוסס על הפורמט של SNAKE_X30_USB: 128x160, RGB565LE, 10fps, raw
תואם ל-fpvideo.bin + libc_server.exe (fprun) וגם להטמעה ב-PAC.

Usage:
  python tools/video_to_ram.py IN.mp4 [OUT.rgb565] [options]
  python tools/video_to_ram.py IN.mp4 --split 512K --dhtb   -> מחלק למודולים עם DHTB
  python tools/video_to_ram.py --test-pattern workdir/video_test.rgb565

פורמט פלט:
  - ברירת מחדל: קובץ אחד workdir/video.rgb565 (128*160*2 * frames)
    10fps * 25sec = 10,240,000 bytes (כמו בדוגמה)
  - --split: מחלק לצ'אנקים (למשל 1M) לטעינה מדורגת ל-RAM
  - --dhtb: מוסיף header 512 bytes לכל מודול (לטעינה כ-Kernel/User ב-PAC)
  - --json: יוצר sidecar עם מטא-דאטה (רזולוציה, fps, frames)
"""

import argparse, pathlib, subprocess, sys, json, shutil, struct, os

DEFAULT_W, DEFAULT_H, DEFAULT_FPS = 128, 160, 10
DHTB_MAGIC = b'DHTB'
DHTB_SIZE = 512

def check_ffmpeg():
    return shutil.which("ffmpeg") is not None

def run_ffmpeg(inp, out, w=DEFAULT_W, h=DEFAULT_H, fps=DEFAULT_FPS):
    # פילטר זהה לקרא-אותי.txt:59
    vf = f"scale={w}:{h}:force_original_aspect_ratio=decrease,pad={w}:{h}:(ow-iw)/2:(oh-ih)/2,fps={fps}"
    cmd = [
        "ffmpeg", "-y",
        "-i", str(inp),
        "-vf", vf,
        "-pix_fmt", "rgb565le",
        "-f", "rawvideo",
        str(out)
    ]
    print(" ".join(cmd))
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode != 0:
        print(r.stderr[-2000:])
        raise SystemExit(f"ffmpeg failed code {r.returncode}")
    print(f"-> {out} {pathlib.Path(out).stat().st_size} bytes")

def add_dhtb(data: bytes) -> bytes:
    hdr = bytearray(DHTB_SIZE)
    hdr[0:4] = DHTB_MAGIC
    # שומר גודל מקורי ב-0x30 כמו ב-kernel (אופציונלי)
    struct.pack_into('<I', hdr, 0x30, len(data))
    return bytes(hdr) + data

def split_file(inp: pathlib.Path, chunk_size: int, out_dir: pathlib.Path, dhtb: bool, prefix: str):
    data = inp.read_bytes()
    n = (len(data) + chunk_size - 1)//chunk_size
    out_dir.mkdir(parents=True, exist_ok=True)
    for i in range(n):
        chunk = data[i*chunk_size:(i+1)*chunk_size]
        if dhtb:
            chunk = add_dhtb(chunk)
        out = out_dir / f"{prefix}_{i:03d}.bin"
        out.write_bytes(chunk)
        print(f"  chunk {i+1}/{n}: {out} {len(chunk)}")
    return n

def make_test_pattern(out: pathlib.Path, w=DEFAULT_W, h=DEFAULT_H, frames=100, fps=DEFAULT_FPS):
    # יוצר RGB565 gradient בלי ffmpeg — לבדיקה ללא תלות חיצונית
    print(f"generating test pattern {w}x{h} {frames} frames")
    buf = bytearray()
    for f in range(frames):
        for y in range(h):
            for x in range(w):
                r = (x*31//w) & 0x1F
                g = ((y*63//h) + f*2) & 0x3F
                b = (f*31//frames) & 0x1F
                rgb565 = (r<<11)|(g<<5)|b
                buf.extend(struct.pack('<H', rgb565))
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(buf)
    print(f"wrote {out} {len(buf)} bytes ({frames} frames)")
    return out

def main():
    ap = argparse.ArgumentParser(description="המרת וידאו ל-RGB565 מודולי RAM")
    ap.add_argument("input", nargs="?", help="קובץ וידאו כניסה (mp4/avi) או --test-pattern")
    ap.add_argument("output", nargs="?", help="קובץ פלט .rgb565 (ברירת מחדל: workdir/video.rgb565)")
    ap.add_argument("--width", type=int, default=DEFAULT_W)
    ap.add_argument("--height", type=int, default=DEFAULT_H)
    ap.add_argument("--fps", type=int, default=DEFAULT_FPS)
    ap.add_argument("--split", help="פצל לצ'אנקים, למשל 1M,512K,256K")
    ap.add_argument("--dhtb", action="store_true", help="הוסף DHTB header (ל-PAC)")
    ap.add_argument("--out-dir", default="workdir", help="תיקיית פלט לצ'אנקים")
    ap.add_argument("--test-pattern", action="store_true", help="צור וידאו בדיקה ללא ffmpeg")
    ap.add_argument("--json", action="store_true", help="צור קובץ .json עם מטא-דאטה")
    args = ap.parse_args()

    if args.test_pattern or args.input == "--test-pattern":
        out = pathlib.Path(args.output or "workdir/video_test.rgb565")
        make_test_pattern(out, args.width, args.height, frames=args.fps*5)
        if args.json:
            meta = {"width": args.width, "height": args.height, "fps": args.fps, "frames": args.fps*5, "pix_fmt": "rgb565le", "bytes": out.stat().st_size}
            pathlib.Path(str(out)+".json").write_text(json.dumps(meta, indent=2, ensure_ascii=False))
        return

    if not args.input:
        ap.print_help()
        print("\nדוגמאות:")
        print("  python tools/video_to_ram.py clip.mp4 workdir/video.rgb565")
        print("  python tools/video_to_ram.py clip.mp4 --split 1M --dhtb --out-dir ram_modules")
        print("  python tools/video_to_ram.py --test-pattern")
        print("\nדרישות: ffmpeg ב-PATH (https://ffmpeg.org) או --test-pattern לבדיקה")
        sys.exit(1)

    inp = pathlib.Path(args.input)
    if not inp.exists():
        sys.exit(f"not found: {inp}")
    out = pathlib.Path(args.output or "workdir/video.rgb565")

    # אם כבר raw, לא צריך ffmpeg
    is_raw = inp.suffix.lower() == ".rgb565"
    if not is_raw and not check_ffmpeg():
        print("ffmpeg לא נמצא ב-PATH.")
        print("הורד מ- https://ffmpeg.org/download.html או התקן via: winget install ffmpeg / choco install ffmpeg")
        print("לחלופין הרץ עם --test-pattern לבדיקה ללא ffmpeg.")
        sys.exit(1)

    out.parent.mkdir(parents=True, exist_ok=True)
    if is_raw:
        # כבר raw — העתקה ישירה
        import shutil as _sh
        _sh.copyfile(inp, out)
        print(f"copy raw {inp} -> {out} {out.stat().st_size} bytes")
    else:
        run_ffmpeg(inp, out, args.width, args.height, args.fps)

    # מטא-דאטה
    sz = out.stat().st_size
    frames = sz // (args.width*args.height*2)
    duration = frames / args.fps if args.fps else 0
    print(f"frames {frames} duration {duration:.1f}s size {sz}")

    if args.json:
        meta = {"width": args.width, "height": args.height, "fps": args.fps, "frames": frames, "duration": duration, "pix_fmt": "rgb565le", "bytes": sz}
        jpath = pathlib.Path(str(out)+".json")
        jpath.write_text(json.dumps(meta, indent=2, ensure_ascii=False), encoding="utf-8")
        print(f"json {jpath}")

    if args.split:
        # פרסר גודל כמו 1M/512K
        s = args.split.upper()
        mult = 1
        if s.endswith("K"): mult=1024; s=s[:-1]
        elif s.endswith("M"): mult=1024*1024; s=s[:-1]
        chunk = int(float(s)*mult)
        prefix = out.stem
        n = split_file(out, chunk, pathlib.Path(args.out_dir), args.dhtb, prefix)
        print(f"פוצל ל-{n} מודולים ב-{args.out_dir} (RAM modules {'+DHTB' if args.dhtb else 'raw'})")
        print("לטעינה ל-RAM: fprun.exe fpvideo.bin workdir ... או צריבה כ-partition ב-PAC")

if __name__ == "__main__":
    main()
