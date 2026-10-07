import pathlib, re

p = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\mmi_res.bin')
data = p.read_bytes()

# Focus on Storage string at 0x204bd04
pos = 0x204bd04
start = max(0, pos-80)
end = min(len(data), pos+120)
chunk = data[start:end]
txt = chunk.decode('utf-8', errors='replace')

print('Storage string at 0x%08X:' % pos)
print('  Context: ...%s...' % txt)
print()

# Also check Disk at 0x216e6ba
pos2 = 0x216e6ba
start2 = max(0, pos2-80)
end2 = min(len(data), pos2+120)
chunk2 = data[start2:end2]
txt2 = chunk2.decode('utf-8', errors='replace')

print('Disk string at 0x%08X (U Disk is in use!):' % pos2)
print('  Context: ...%s...' % txt2)
print()

# Search for 'Storage' in user_bin.c
p2 = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\decompiled\user-source\user_bin.c.gz')
import gzip
with gzip.open(p2, 'rt', errors='ignore') as f:
    txt3 = f.read()

# Convert pos to byte position - the .c.gz is text, so we need to search in the text
# Let's search for 'Storage' as it appears in the decomplied text
# First, let's get the raw bytes search
data_bytes = txt3.encode('latin-1', errors='ignore')
byte_positions = [m.start() for m in re.finditer(b'Storage', data_bytes)]

print('Storage occurrences in user_bin.c (first 5):')
for i, pos in enumerate(byte_positions[:5]):
    # Get context
    context_start = max(0, pos-100)
    context_end = min(len(data_bytes), pos+150)
    context = data_bytes[context_start:context_end]
    # Try to decode
    try:
        ctx_txt = context.decode('utf-8', errors='replace')
    except:
        ctx_txt = context.hex()
    print('  %d: ...%s...' % (i+1, ctx_txt[:150]))