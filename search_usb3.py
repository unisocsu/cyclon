import gzip, pathlib, re

p = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\decompiled\user-source\user_bin.c.gz')
with gzip.open(p, 'rt', errors='ignore') as f:
    txt = f.read()

# Search for functions that might set USB mode
# Look for patterns like: set_mode, usb_mode, configure_mode, etc.
# Also look for references to specific values that indicate USB modes

patterns = [
    r'set_usb_mode',
    r'UsbConfig',
    r'configure_usb',
    r'USB_MODE',
    r'usb_mode',
    r'Mass_Storage',
    r'mass_storage',
    r'MTP',
    r'mtp',
    r'SetConfig',
    r'set_config',
    r'GetConfig',
    r'get_config',
]

found = []
for pat in patterns:
    positions = [m.start() for m in re.finditer(pat, txt, re.IGNORECASE)]
    if positions:
        found.append((pat, len(positions)))
        # Show first occurrence context
        pos = positions[0]
        start = max(0, pos-150)
        end = min(len(txt), pos+200)
        snippet = txt[start:end]
        print(f'Pattern: {pat} ({len(positions)} occurrences)')
        # Print lines containing the pattern
        for line in snippet.split('\n'):
            if re.search(pat, line, re.IGNORECASE):
                print(f'  {line[:150]}')
        print()

if not found:
    print('No direct USB mode patterns found')
    
# Also search for functions with 'USB' in name in the 0x882x range
print('=== Searching for FUN_882xUSB ===')
pattern2 = r'FUN_882[0-9a-f]{2}USB'
positions2 = [m.start() for m in re.finditer(pattern2, txt, re.IGNORECASE)]
print(f'Found {len(positions2)} matches')
for pos in positions2[:5]:
    start = max(0, pos-100)
    end = min(len(txt), pos+200)
    snippet = txt[start:end]
    for line in snippet.split('\n')[:3]:
        if 'USB' in line.upper():
            print(f'  {line[:150]}')
    print()