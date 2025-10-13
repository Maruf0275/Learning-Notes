@echo off
:loop
if "%~1"=="" exit /b
if /i "%~x1"==".zip" (
    pushd "%~dp1"
    tar -xf "%~nx1"
    popd
) else if /i "%~x1"==".rar" (
    pushd "%~dp1"
    "%ProgramFiles%\WinRAR\UnRAR.exe" x "%~nx1"
    popd
)
shift
goto loop
