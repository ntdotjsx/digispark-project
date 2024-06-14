#define LED_PIN 1
#include <DigiKeyboard.h>

void setup() {
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // กด Windows + R
    DigiKeyboard.delay(100);
    DigiKeyboard.print("cmd /c start https://github.com/ntdotjsx"); // พิมพ์ "cmd /K whoami" (ใช้ /K แทน /C)
    DigiKeyboard.sendKeyStroke(KEY_ENTER); // กด Enter
}

void loop() {
    // ไม่ต้องมีการใช้งานใน loop ในกรณีนี้
}
