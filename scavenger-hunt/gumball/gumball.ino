/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
 int pin = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  g();
  delay(2000);              // wait for 2 seconds
  u();
  delay(2000);              // wait for 2 seconds
  m();
  delay(2000);              // wait for 2 seconds
  b();
  delay(2000);              // wait for 2 seconds
  a();
  delay(2000);              // wait for 2 seconds
  l();
  delay(2000);              // wait for 2 seconds
  l();
  delay(2000);              // wait for 2 seconds
  
  // Blinking lights that it's the end of message
  EOM();
  delay(1000);              // wait for a second
  
}

// EOM signal
void EOM(){
  fastDot();
  fastDot();
  fastDot();
  fastDot();
}

void dot(){
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);              // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(250);              // wait for a second
}

void dash(){
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(250);              // wait for a second
}

void fastDot(){
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(25);              // wait for a second
}

// the Morse code alphabet
void a(){
  dot();
  dash();
}

void b(){
  dash();
  dot();
  dot();
  dot();
}

void c(){
  dash();
  dot();
  dash();
  dot();
}

void d(){
  dash();
  dot();
  dot();
}

void e(){
  dot();
}

void f(){
  dot();
  dot();
  dash();
  dot();
}

void g(){
  dash();
  dash();
  dot();
}

void h(){
  dot();
  dot();
  dot();
  dot();
}

void i(){
  dot();
  dot();
}

void j(){
  dot();
  dash();
  dash();
  dash();
}

void k(){
  dash();
  dot();
  dash();
}

void l(){
  dot();
  dash();
  dot();
  dot();
}

void m(){
  dash();
  dash();
}

void n(){
  dash();
  dot();
}

void o(){
  dash();
  dash();
  dash();
}

void p(){
  dot();
  dash();
  dash();
  dot();
}

void q(){
  dash();
  dash();
  dot();
  dash();
}

void r(){
  dot();
  dash();
  dot();
}

void s(){
  dot();
  dot();
  dot();
}

void t(){
  dash();
}

void u(){
  dot();
  dot();
  dash();
}

void v(){
  dot();
  dot();
  dot();
  dash();
}

void w(){
  dot();
  dash();
  dash();
}

void x(){
  dash();
  dot();
  dot();
  dash();
}

void y(){
  dash();
  dot();
  dash();
  dash();
}

void z(){
  dash();
  dash();
  dot();
  dot();
}

void n1(){
  dot();
  dash();
  dash();
  dash();
  dash();
}

void n2(){
  dot();
  dot();
  dash();
  dash();
  dash();
}

void n3(){
  dot();
  dot();
  dot();
  dash();
  dash();
}

void n4(){
  dot();
  dot();
  dot();
  dot();
  dash();
}

void n5(){
  dot();
  dot();
  dot();
  dot();
  dot();
}

void n6(){
  dash();
  dot();
  dot();
  dot();
  dot();
}

void n7(){
  dash();
  dash();
  dot();
  dot();
  dot();
}

void n8(){
  dash();
  dash();
  dash();
  dot();
  dot();
}

void n9(){
  dash();
  dash();
  dash();
  dash();
  dot();
}

void n0(){
  dash();
  dash();
  dash();
  dash();
  dash();
}

