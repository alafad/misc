dim WindowName : WindowName = "datei.txt - Editor"  

Dim WshShell : Set WshShell = CreateObject("Wscript.Shell")

dim i : i = 0
do while i < 10
  If WshShell.AppActivate(WindowName) Then
     WshShell.Sendkey("abc")
     exit do
  end if
  i = i + 1
  Wscript.Sleep 1000
loop