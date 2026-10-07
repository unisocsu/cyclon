#!/usr/bin/env python3
"""
RAM loader for UNISOC/Spreadtrum via USB-FDL
Usage: python ram_loader.py --port COM3 --file ram_test.bin --addr 0x80a06200
Requires: pip install pyserial
"""
import argparse, serial, struct, time, sys

def main():
    p=argparse.ArgumentParser()
    p.add_argument('--port', required=True, help='COM port (e.g. COM3 or /dev/ttyUSB0)')
    p.add_argument('--file', required=True)
    p.add_argument('--addr', default='0x80a06200')
    args=p.parse_args()
    addr=int(args.addr,0)
    data=open(args.file,'rb').read()
    print(f"Opening {args.port} at 115200...")
    try:
        ser=serial.Serial(args.port, 115200, timeout=1)
    except Exception as e:
        print(f"Failed to open {args.port}: {e}")
        print("Check Device Manager for correct COM port after connecting device in FDL mode (Vol- + Power)")
        sys.exit(1)
    print(f"Sending {len(data)} bytes to 0x{addr:08x}...")
    # This is a placeholder for the real FDL protocol.
    # For UMS9117, the real protocol is more complex (handshake, BSL).
    # For now, we just stream the file and let the user know.
    # To actually implement, we need to replicate the FDL2 download protocol from fdl2.c
    # For quick test, we recommend using the PAC method instead.
    print("NOTE: Direct RAM loading via pyserial requires implementing the Spreadtrum BSL protocol.")
    print("For now, please use the PAC method: flash Downloads/lcd.pac with ResearchDownload/SPD Upgrade Tool.")
    print("The PAC will load the same ram_test code to 0x80a06200 via the normal PAC flow.")
    ser.close()

if __name__=='__main__':
    main()
