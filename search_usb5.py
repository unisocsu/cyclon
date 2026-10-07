import gzip, pathlib, re

p = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\decompiled\user-source\user_bin.c.gz')
with gzip.open(p, 'rt', errors='ignore') as f:
    txt = f.read()

# Search for FUN_810ffa5c which is the USB host controller init
print('=== Searching for FUN_810ffa5c ===')
pattern = 'FUN_810ffa5c'
positions = [m.start() for m in re.finditer(pattern, txt)]
print(f'Found {len(positions)} occurrences')
for pos in positions[:5]:
    start = max(0, pos-200)
    end = min(len(txt), pos+300)
    snippet = txt[start:end]
    # Print lines around the match
    lines = snippet.split('\n')
    for i, line in enumerate(lines):
        if pattern in line.upper() or 'USB' in line.upper() or 'usb' in line.lower():
            print(f'  Line {i}: {line[:150]}')
    print()

# Also search for USB host controller related functions
print('=== Searching for USB host init patterns ===')
patterns = [
    r'810ffa5c',
    r'UDISK',
    r'UDisk',
    r'mass_storage',
    r'MTP',
    r'devcfg',
    r'DevCfg',
]
for pat in patterns:
    positions = [m.start() for m in re.finditer(pat, txt, re.IGNORECASE)]
    if positions:
        print(f'{pat}: {len(positions)} occurrences')
        # Show first context
        pos = positions[0]
        start = max(0, pos-100)
        end = min(len(txt), pos+150)
        snippet = txt[start:end]
        for line in snippet.split('\n')[:3]:
            if pat.lower() in line.lower():
                print(f'  {line[:150]}')
        print()

# Search for functions that deal with device configuration
print('=== Searching for device configuration functions ===')
pattern2 = r'FUN_88[0-9a-f]{6}\(.*param_.*\)'
# Get all FUN_88 addresses and check which have USB-related code
addrs = re.findall(r'FUN_88[0-9a-f]{6}', txt)
unique_addrs = list(set(addrs))
usb_related = []
for addr in unique_addrs[:100]:  # Check first 100 unique addresses
    pat = re.escape(addr)
    positions = [m.start() for m in re.finditer(pat, txt)]
    if positions:
        pos = positions[0]
        start = max(0, pos-100)
        end = min(len(txt), pos+200)
        snippet = txt[start:end]
        # Check if USB or device appears in the function
        if 'USB' in snippet.upper() or 'usb' in snippet.lower() or 'DEVICE' in snippet.upper():
            usb_related.append((addr, snippet[:200]))
            if len(usb_related) >= 10:
                break

for addr, snippet in usb_related:
    print(f'Addrs: {addr}')
    print(f'Snippet: {snippet[:100]}')
    print()