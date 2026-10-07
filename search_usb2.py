import gzip, pathlib, re

p = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\decompiled\user-source\user_bin.c.gz')
with gzip.open(p, 'rt', errors='ignore') as f:
    txt = f.read()

for target in ['FUN_8821c05a', 'FUN_887f0222']:
    positions = [m.start() for m in re.finditer(target, txt)]
    print(f'{target}: {len(positions)} occurrences')
    for pos in positions[:3]:
        start = max(0, pos-100)
        end = min(len(txt), pos+200)
        snippet = txt[start:end]
        for line in snippet.split('\n')[:5]:
            if target in line:
                print(f'  {line[:100]}')
        print()