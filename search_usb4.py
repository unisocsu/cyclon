import gzip, pathlib, re

p = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\decompiled\user-source\user_bin.c.gz')
with gzip.open(p, 'rt', errors='ignore') as f:
    txt = f.read()

# Search for the thunk that sets up the struct for OpenFmmMainExplorer
print('=== Searching for thunk_EXT_FUN_811049dc ===')
pattern = 'thunk_EXT_FUN_811049dc'
positions = [m.start() for m in re.finditer(pattern, txt)]
print(f'Found {len(positions)} occurrences')
for pos in positions[:5]:
    start = max(0, pos-200)
    end = min(len(txt), pos+300)
    snippet = txt[start:end]
    # Print the function definition context
    for line in snippet.split('\n')[:10]:
        if '811049dc' in line or 'local' in line.lower() or 'param' in line.lower():
            print(f'  {line[:150]}')
    print()

# Also search for 0x30 or 0x20 or size parameters near file manager
print('=== Searching for FUN_8840376e context ===')
pattern2 = 'FUN_8840376e'
positions2 = [m.start() for m in re.finditer(pattern2, txt)]
print(f'Found {len(positions2)} occurrences')
for pos in positions2[:3]:
    start = max(0, pos-300)
    end = min(len(txt), pos+500)
    snippet = txt[start:end]
    # Print function body
    func_body = snippet.split('/* ====')[0] if '/* ====' in snippet else snippet
    # Just print first 20 lines
    lines = func_body.split('\n')[:20]
    for line in lines:
        print(f'  {line[:150]}')
    print()

# Search for the struct initialization pattern
print('=== Searching for struct initialization patterns ===')
pattern3 = 'local_38|local_50|local_2c|local_34|local_30|local_2a|local_24|local_28'
positions3 = [m.start() for m in re.finditer(pattern3, txt)]
print(f'Found {len(positions3)} occurrences for pattern')
# Show a few
for pos in positions3[:5]:
    start = max(0, pos-50)
    end = min(len(txt), pos+100)
    snippet = txt[start:end]
    for line in snippet.split('\n')[:3]:
        print(f'  {line[:150]}')
    print()