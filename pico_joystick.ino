#include <Joystick.h>

int sensorPin1 = A0;    // 1st axis poti
int sensorPin2 = A1;    // 2nd axis poti
int sensorValue1 = 0; 
int sensorValue2 = 0; 
int sensorMin = 1023;  // minimum sensor value
int sensorMax = 0;     // maximum sensor value

void setup() {
  pinMode(16, INPUT_PULLUP); // joystick button 1
  pinMode(17, INPUT_PULLUP); // joystick button 2
  Joystick.begin();
}

void loop() {
 Joystick.X (analogRead(sensorPin1));
 Joystick.Y (analogRead(sensorPin2));
 // to test Joystick.Y = map(sensorValue1, sensorMin, sensorMax, 0, 255); // to test
 // Joystick.Y(map(sensorPin2, sensorMin, sensorMax, 0, 255);)

 if (digitalRead(17) == LOW) { Joystick.button(0, true); Joystick.send_now(); Joystick.button(0, false); }
 if (digitalRead(16) == LOW) { Joystick.button(1, true); Joystick.send_now(); Joystick.button(1, false); }

 
 // to test: while(digitalRead(0) == LOW { Joystick.button(0, true);) } }
  
}
