import gzip, re, pathlib
p=pathlib.Path(r'pac-c-decompilation_extracted\decompiled\user-source\user_bin.c.gz')
data=gzip.open(p,'rt',errors='ignore').read()
for m in re.finditer(r's_BML_[A-Za-z0-9_]+', data):
    print(m.group(0))
