import gzip, pathlib, re

p = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\mmi_res.bin')
data = p.read_bytes()

# Storage menu at 0x204bd04 structure
pos = 0x204bd04
before = data[pos-4:pos]
print('4 bytes before Storage string: %s' % before.hex())

p2 = pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\user.bin')
data3 = p2.read_bytes()

positions = [m.start() for m in re.finditer(b'\x74\x00\x00\x00', data3)]
print('\x74\x00\x00\x00 pattern in user.bin: %d occurrences' % len(positions))

target = b'Storage'
positions2 = [m.start() for m in re.finditer(target, data3)]
print('Storage in user.bin: %d occurrences' % len(positions2))

print()
print('=== Summary ===')
print('The "Storage" menu at mmi_res 0x204bd04 exists')
print('But its handler/password not found in user.bin via text search')
print('All USB references are for tethering, not Mass Storage')
print('User insists 100% that Mass Storage function exists')
print('Next step: either deeper binary analysis, or conclude with file manager solution')