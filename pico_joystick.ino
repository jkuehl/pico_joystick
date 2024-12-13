#include <Joystick.h>

int sensorPin1 = A0;    // 1st axis poti
int sensorPin2 = A1;    // 2nd axis poti
int sensorPin3 = A2;    // 3rd axis poti
int sensorPin4 = A3;    // 4th axis poti
int sensorValue1 = 0; 
int sensorValue2 = 0; 
int sensorValue3 = 0; 
int sensorValue4 = 0; 
int sensorMin = 1023;  // minimum sensor value
int sensorMax = 0;     // maximum sensor value

void setup() {
  pinMode(0, INPUT_PULLUP); // joystick button 1
  pinMode(1, INPUT_PULLUP); // joystick button 2
  pinMode(2, INPUT_PULLUP); // joystick button 3
  pinMode(3, INPUT_PULLUP); // joystick button 4
  Joystick.begin();
}

void loop() {
 Joystick.X (analogRead(sensorPin1));
 Joystick.Y (analogRead(sensorPin2));
 // to test Joystick.Y = map(sensorValue1, sensorMin, sensorMax, 0, 255); // to test
 // Joystick.Y(map(sensorPin2, sensorMin, sensorMax, 0, 255);)
 Joystick.sliderLeft  (analogRead(sensorPin3));
 Joystick.sliderRight (analogRead(sensorPin4));
 if (digitalRead(0) == LOW) { Joystick.button(0, true); Joystick.send_now(); Joystick.button(0, false); }
 if (digitalRead(1) == LOW) { Joystick.button(1, true); Joystick.send_now(); Joystick.button(1, false); }
 if (digitalRead(2) == LOW) { Joystick.button(2, true); Joystick.send_now(); Joystick.button(2, false); }
 if (digitalRead(3) == LOW) { Joystick.button(3, true); Joystick.send_now(); Joystick.button(3  , false); }
 
 // to test: while(digitalRead(0) == LOW { Joystick.button(0, true);) } }
  
}
