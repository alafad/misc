@echo off
reg add "HKEY_CURRENT_USER\control panel\desktop" /v wallpaper /t REG_SZ /d  C:\Windows\WinSxS\wow64_microsoft-windows-healthcenter_31bf3856ad364e35_10.0.19041.746_none_93ab1751f704826d\SecurityAndMaintenance_Alert.png /f

RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters

exit
#reg add "HKEY_CURRENT_USER\control panel\desktop" /v wallpaper /t REG_SZ /d  %userprofile%\desktop\test.png /f
