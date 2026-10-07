@echo off
title Download Latest FDL2 & Flash
cd /d "%~dp0"

echo Downloading latest t117-hello-fdl2.zip from GitHub Actions (Run 37491206724)...
powershell -Command "Invoke-WebRequest -Uri 'https://nightly.link/unisocsu/cyclon/actions/runs/37491206724/t117-hello-fdl2.zip' -OutFile 'C:\Temp\t117_hello_fdl2.zip'; Expand-Archive -Force 'C:\Temp\t117_hello_fdl2.zip' 'C:\Temp\t117_extracted'; Copy-Item 'C:\Temp\t117_extracted\t117_hello_fdl2.bin' 'C:\Temp\t117_hello_fdl2.bin' -Force; Write-Host 'Extracted successfully to C:\Temp\t117_hello_fdl2.bin'"

echo.
echo Done! You can now run your spd_dump command.
pause
