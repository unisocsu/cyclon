import pathlib, re

# Search mmi_res.bin for Storage/Disk related strings
p = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\mmi_res.bin')
data = p.read_bytes()

patterns = [b'Storage', b'Disk', b'disk', b'Drive', b' drive', b'MEMORY', b'Memory', b'Card', b'card', b'USB Mode', b'usb mode', b'Connect PC', b'connect pc']
results = []
for pat in patterns:
    positions = [m.start() for m in re.finditer(pat, data)]
    if positions:
        results.append(f'Found {pat}: {len(positions)} occurrences')
        for pos in positions[:2]:
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
out = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\storage_search_mmi.txt')
out.write_bytes('\n'.join(results).encode('utf-8'))
print(f'Results written to {out}')

# Also search user.bin
p2 = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\user.bin')
data2 = p2.read_bytes()

results2 = []
for pat in patterns:
    positions = [m.start() for m in re.finditer(pat, data2)]
    if positions:
        results2.append(f'Found {pat} in user.bin: {len(positions)} occurrences')
        for pos in positions[:2]:
            start = max(0, pos-40)
            end = min(len(data2), pos+80)
            chunk = data2[start:end]
            try:
                txt = chunk.decode('utf-8', errors='replace')
            except:
                txt = chunk.hex()
            results2.append(f'  offset {hex(pos)}: ...{txt}...')
    else:
        results2.append(f'{pat} in user.bin: not found')

out2 = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\storage_search_user.txt')
out2.write_bytes('\n'.join(results2).encode('utf-8'))
print(f'User results written to {out2}')