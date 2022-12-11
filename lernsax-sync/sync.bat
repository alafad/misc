net use L: /delete

REM net use L: \\https://www.lernsax.de/webdav.php USER@bszetdd.lernsax.de PASS
net use L: \\https://www.lernsax.de/webdav.php /u:USER@bszetdd.lernsax.de PASS

robocopy L:\ C:\Users\x\Documents\lernsax\ /xo /MIR /W:0 /R:0 



pause