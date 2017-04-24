#include <Arduino.h>
#include "ProbeTTYLib.h"

/**
 * @file FooLib.cpp
 * @author Ladislas de Toldi
 * @version 1.0
 */

ProbeTTY::ProbeTTY() {
	// initialize variables
	_variableOne = 2;
	_variableTwo = 3;
}

void ProbeTTY::firstFooMethod() const {
	// print variable one
	Wire.begin();
	Serial.println(_variableOne);
}

void ProbeTTY::secondFooMethod() const {
	// print variable one
	Serial.println(_variableTwo);
}
