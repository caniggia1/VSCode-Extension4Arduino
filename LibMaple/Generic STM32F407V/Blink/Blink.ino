/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

#define LED PA6
//#define LED PA7

#pragma GCC optimize ("O0")     // "O0", "O1", "O2", "O3" or "Os"(Default)

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever xxxy
void loop() {
//  gpio_write_bit(PIN_MAP[LED].gpio_device, PIN_MAP[LED].gpio_bit, HIGH);
  digitalWrite(LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(LED, LOW);   // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second
}
