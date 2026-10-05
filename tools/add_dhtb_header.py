#!/usr/bin/env python3
"""Add DHTB header to NuttX binary for UMS9117 boot1 compatibility.

Usage:
    python3 add_dhtb_header.py input.bin output.bin

The DHTB header is 512 bytes and must be prepended to the kernel binary.
Boot1 checks for the "DHTB" magic before executing the kernel.

Format verified from QLYX X30 kernel.bin:
    Offset 0x00: Magic "DHTB" (4 bytes)
    Offset 0x04: Version/data (unknown)
    Offset 0x30: Some value (0x00bf13f0 seen in original)
    Rest: Zero padding
"""
import sys

DHTB_MAGIC = b'DHTB'
DHTB_SIZE = 512

def main():
    if len(sys.argv) != 3:
        print(__doc__)
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = sys.argv[2]
    
    # Read input binary
    with open(input_file, 'rb') as f:
        code = f.read()
    
    print(f"Input:  {input_file} ({len(code)} bytes)")
    
    # Check if input already has DHTB header
    if code[:4] == DHTB_MAGIC:
        print("⚠️  Input already has DHTB header — copying as-is")
        with open(output_file, 'wb') as f:
            f.write(code)
        print(f"Output: {output_file} ({len(code)} bytes)")
        return
    
    # Create DHTB header (512 bytes)
    header = bytearray(DHTB_SIZE)
    
    # Magic
    header[0:4] = DHTB_MAGIC
    
    # Fill with zeros — bootloader primarily checks magic
    # TODO: Add proper checksum if bootloader requires it
    
    # Combine header + code
    output = bytes(header) + code
    
    # Write output
    with open(output_file, 'wb') as f:
        f.write(output)
    
    print(f"Output: {output_file} ({len(output)} bytes)")
    print(f"  Header: {DHTB_SIZE} bytes (DHTB magic)")
    print(f"  Code:   {len(code)} bytes")
    print(f"✅ Done — ready for PAC repack")

if __name__ == '__main__':
    main()
