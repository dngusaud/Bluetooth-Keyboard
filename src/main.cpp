#include <Arduino.h>
#include <SoftwareSerial.h>

const byte rxPin = 0;
const byte txPin = 1;

SoftwareSerial mySerial(rxPin,txPin);

void setup() {
  // put your setup code here, to run once:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);

  mySerial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  mySerial.write("Hello World\n");
  delay(1000);
}