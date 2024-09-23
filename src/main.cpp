#include <Arduino.h>
int led1=1;
int led2=2;
int led3=3;
int led4=4;

int temps = 500;

void setup() {
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);
  pinMode(led4 , OUTPUT);
}
void loop() {
  for (int i=1; i<5;i++)
  {
    digitalWrite(i , HIGH);
    delay(temps);
    digitalWrite(i , LOW);
  }
}