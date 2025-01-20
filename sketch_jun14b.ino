#define LED_PIN 1
#include <DigiKeyboard.h>

void setup() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
    DigiKeyboard.delay(100);
    DigiKeyboard.print("cmd /c start https://github.com/ntdotjsx"); 
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
