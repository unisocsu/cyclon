#!/usr/bin/env python3
"""Apply UMS9117 board support into a fresh NuttX checkout."""
import pathlib, shutil, re, sys

ROOT = pathlib.Path(__file__).resolve().parents[1]  # cyclon/
NUTTX = ROOT / "nuttx"
SRC = ROOT / "board-support"

def copy_board():
    for src in (SRC / "arch").rglob("*"):
        if src.is_file():
            dst = NUTTX / src.relative_to(SRC)
            dst.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(src, dst)
            print(f"copied {src.relative_to(SRC)} -> {dst.relative_to(ROOT)}")
    for src in (SRC / "boards").rglob("*"):
        if src.is_file():
            dst = NUTTX / src.relative_to(SRC)
            dst.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(src, dst)
            print(f"copied {src.relative_to(SRC)} -> {dst.relative_to(ROOT)}")

def patch_kconfig(path, marker, block):
    text = path.read_text(encoding="utf-8")
    if marker in text:
        print(f"already patched {path.relative_to(ROOT)}")
        return
    # Insert after marker line
    if "ARCH_CHIP_A1X" in marker:
        anchor = "config ARCH_CHIP_A1X"
        if anchor in text:
            text = text.replace(
                "config ARCH_CHIP_AM335X",
                block + "\nconfig ARCH_CHIP_AM335X",
                1
            )
            # Actually insert our block before AM335X
            # We already did, but need to ensure block contains marker
    path.write_text(text, encoding="utf-8")

def main():
    if not NUTTX.exists():
        print("nuttx/ not found, cloning...")
        import subprocess
        subprocess.check_call(["git","clone","https://github.com/apache/nuttx.git","--depth","1", str(NUTTX)])
        apps = ROOT / "apps"
        if not apps.exists():
            subprocess.check_call(["git","clone","https://github.com/apache/nuttx-apps.git","--depth","1", str(apps)])

    copy_board()

    # Patch arch/arm/Kconfig
    kconfig_arch = NUTTX / "arch" / "arm" / "Kconfig"
    if kconfig_arch.exists():
        txt = kconfig_arch.read_text(encoding="utf-8")
        if "ARCH_CHIP_UMS9117" not in txt:
            old = "config ARCH_CHIP_A1X\n\tbool \"Allwinner A1X\""
            new = "config ARCH_CHIP_A1X\n\tbool \"Allwinner A1X\""
            # Insert new chip after A1X block before AM335X
            txt = txt.replace(
                'config ARCH_CHIP_AM335X',
                'config ARCH_CHIP_UMS9117\n\tbool "UNISOC UMS9117"\n\tselect ARCH_CORTEXA7\n\tselect ARCH_HAVE_IRQPRIO\n\tselect ARCH_HAVE_LOWVECTORS\n\tselect ARCH_HAVE_FETCHADD\n\tselect ARCH_HAVE_SDRAM\n\tdepends on BOOT_RUNFROMSDRAM\n\tselect ARCH_HAVE_ADDRENV\n\tselect ARCH_NEED_ADDRENV_MAPPING\n\t---help---\n\t\tUNISOC/Spreadtrum UMS9117 SoC (QLYX X30 phone, ARM Cortex-A7, LPDDR3)\n\nconfig ARCH_CHIP_AM335X'
            )
            kconfig_arch.write_text(txt, encoding="utf-8")
            print("patched arch/arm/Kconfig")

    # Patch boards/Kconfig
    kconfig_boards = NUTTX / "boards" / "Kconfig"
    if kconfig_boards.exists():
        txt = kconfig_boards.read_text(encoding="utf-8")
        if "ARCH_BOARD_QLYX_X30" not in txt:
            txt = txt.replace(
                'config ARCH_BOARD_PCDUINO_A10',
                'config ARCH_BOARD_PCDUINO_A10'
            )
            # Insert after PCDUINO_A10 block
            # Find the block end and insert
            m = re.search(r'config ARCH_BOARD_PCDUINO_A10.*?This port was developed on the v1 board,\n\t\tbut the others may be compatible\.\n', txt, re.DOTALL)
            if m:
                insert = m.group(0) + '\nconfig ARCH_BOARD_QLYX_X30\n\tbool "QLYX X30 (UNISOC UMS9117)"\n\tdepends on ARCH_CHIP_UMS9117\n\tselect ARCH_HAVE_LEDS\n\tselect ARCH_HAVE_BUTTONS\n\tselect ARCH_HAVE_IRQBUTTONS\n\t---help---\n\t\tQLYX X30 phone with UNISOC UMS9117 SoC. Verified UART0 at 0x70000000,\n\t\tRAM at 0x80a06000 (12MB), DHTB header 512 bytes.\n'
                txt = txt.replace(m.group(0), insert, 1)
                # Also add default
                txt = txt.replace('default "pcduino-a10"                  if ARCH_BOARD_PCDUINO_A10',
                                  'default "pcduino-a10"                  if ARCH_BOARD_PCDUINO_A10\n\tdefault "qlyx-x30"                     if ARCH_BOARD_QLYX_X30')
            kconfig_boards.write_text(txt, encoding="utf-8")
            print("patched boards/Kconfig")

    print("apply_board done")

if __name__ == "__main__":
    main()
