@echo off
title UMS9117 T117 Custom FDL2 Loader & LCD Test
cd /d "%~dp0"

echo [1/3] Downloading latest t117_hello_fdl2.bin from GitHub Actions artifact...
python -c "
import urllib.request, json, zipfile, io, os
try:
    url = 'https://api.github.com/repos/unisocsu/cyclon/actions/artifacts'
    req = urllib.request.urlopen(url)
    data = json.loads(req.read().decode())
    art = [a for a in data['artifacts'] if a['name'] == 't117-hello-fdl2'][0]
    dl_url = art['archive_download_url']
    print(f'Downloading artifact ID {art[\"id\"]}')
    # Note: If auth is required, we use nightly.link public mirror:
    run_id = art['workflow_run']['id']
    nightly_url = f'https://nightly.link/unisocsu/cyclon/actions/runs/{run_id}/t117-hello-fdl2.zip'
    print(f'Fetching from {nightly_url}...')
    zip_data = urllib.request.urlopen(nightly_url).read()
    with zipfile.ZipFile(io.BytesIO(zip_data)) as z:
        z.extractall(r'C:\Temp')
    print('Successfully extracted t117_hello_fdl2.bin to C:\\Temp')
except Exception as e:
    print('Auto-download note:', e)
"

echo [2/3] Please connect your phone in FDL mode:
echo   - Turn off phone completely
echo   - Hold [*] key
echo   - Connect USB cable
echo.
pause

echo [3/3] Running spd_dump with Custom FDL1 and Custom FDL2...
& "C:\Users\LENOVO\Downloads\SNAKE_HELLO\spd_dump.exe" --wait 300 fdl "C:\Users\LENOVO\Downloads\SNAKE_HELLO\t117_fdl1.bin" 0x6200 fdl "C:\Temp\t117_hello_fdl2.bin" 0x80100000

echo Done!
pause
