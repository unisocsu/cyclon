import pathlib, re

p = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\user.bin')
data = p.read_bytes()

patterns = [b'UDISK', b'Mass', b'MTP', b'PC Suite', b'Diagnostic', b'VID', b'PID', b'USB Mode', b'Configure', b'Enumerate', b'Connection', b'Download']
results = []
for pat in patterns:
    positions = [m.start() for m in re.finditer(pat, data)]
    if positions:
        results.append(f'Found {pat}: {len(positions)} occurrences')
        for pos in positions[:3]:
            start = max(0, pos-40)
            end = min(len(data), pos+80)
            chunk = data[start:end]
            try:
                txt = chunk.decode('utf-8', errors='replace')
            except:
                txt = chunk.hex()
            results.append(f'  offset {hex(pos)}: ...{txt}...')
    else:
        results.append(f'{pat}: not found')

# Write results to file
out = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\usb_search_results.txt')
out.write_bytes('\n'.join(results).encode('utf-8'))
print(f'Results written to {out}')