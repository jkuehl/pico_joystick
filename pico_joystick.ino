#include <Joystick.h>

void setup() {
  pinMode(16, INPUT_PULLUP); // joystick button 1
  pinMode(17, INPUT_PULLUP); // joystick button 2
  Joystick.begin();
} //setup end


    void loop() {
 Joystick.X (analogRead(A0));
 Joystick.Y (analogRead(A1));
 if (digitalRead(16) == LOW) { Joystick.button(1, true);Joystick.send_now(); delay(10); Joystick.button(1, false);} 
 if (digitalRead(17) == LOW) { Joystick.button(2, true);Joystick.send_now(); delay(10); Joystick.button(2, false);} 
} //loop end
