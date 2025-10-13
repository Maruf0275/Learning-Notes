@echo off
:: Move a file from one location to another

set /p filedir="Enter the full path of the file (e.g., C:\path\file.txt): "
set /p desdir="Enter the destination directory (e.g., C:\destination): "
echo.
pause
move "%filedir%" "%desdir%\"
if errorlevel 1 (
    echo Failed to move the file. Please check the path and try again.
) else (
    echo File moved successfully!
)
pause
exit