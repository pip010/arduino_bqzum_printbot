#include <Arduino.h>
#include <Wire.h>
#include "ProbeTTYLib.h"

ProbeTTY obj;

void setup() {

	Serial.begin(19200);
	delay(1000);

}

void loop() {

	obj.firstFooMethod();
	delay(1000);
	obj.secondFooMethod();
	delay(1000);

}

