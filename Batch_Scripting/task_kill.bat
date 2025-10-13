@echo off

color 0A
Title script to kill process after a time

start notepad.exe
timeout /t 10 /nobreak
taskkill /f /im notepad.exe