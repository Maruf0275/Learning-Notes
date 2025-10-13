@echo off
Title Site Checker
:loop
color 0A
set /p site=Enter Website (Without https://): 
ping %site% -n 1 > nul
if errorlevel 1 (
    echo %site% is DOWN and UNREACHABLE.
) else (
    echo %site% is UP and REACHABLE.
)
pause
cls
goto loop