#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT); //green
  pinMode(3,OUTPUT); //red
  pinMode(6,OUTPUT); //yellw

}

void loop() {
  // put your main code here, to run repeatedly:
  // Project 2: Simple Flashing LED Light
  //digitalWrite(7, HIGH);
  //delay(1000);
  //digitalWrite(7, LOW);
  //delay(1000);


  digitalWrite(9, HIGH);
  delay(3000);
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  delay(3000);
  digitalWrite(6, LOW);
  digitalWrite(3, HIGH);
  delay(3000);
  digitalWrite(3, LOW);
  
  


}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}