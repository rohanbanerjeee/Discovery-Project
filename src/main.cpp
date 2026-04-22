#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

int redPin = 9; 

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT); //green
  pinMode(3,OUTPUT); //red
  pinMode(6,OUTPUT); //yellw

  pinMode(redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Project 2: Simple Flashing LED Light
  //digitalWrite(7, HIGH);
  //delay(1000);
  //digitalWrite(7, LOW);
  //delay(1000);

  // Project 3: Traffic Lights
  // digitalWrite(9, HIGH);
  // delay(3000);
  // digitalWrite(9, LOW);
  // digitalWrite(6, HIGH);
  // delay(3000);
  // digitalWrite(6, LOW);
  // digitalWrite(3, HIGH);
  // delay(3000);
  // digitalWrite(3, LOW);
  
  // Project 4: Analog Pins 
  analogWrite(redPin, 255);
  delay(1000);
  analogWrite(redPin, 40);
  delay(1000);



}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}