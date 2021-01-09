#include "HID-Project.h"

void setup() {
 Keyboard.begin();
 delay(500);

 // Payload
 delay(3000);
 Keyboard.press(KEY_LEFT_GUI);
 Keyboard.press(KEY_R);
 Keyboard.releaseAll();
 delay(500);
 Keyboard.print("cmd.exe");
 delay(500);
 Keyboard.write(KEY_ENTER);
 delay(750);
 Keyboard.print("ipconfig");
 Keyboard.write(KEY_ENTER);
 }

void loop() { }
