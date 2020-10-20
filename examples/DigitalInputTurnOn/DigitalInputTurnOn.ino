#include <iostream>
#include <conio.h> 
#include "DigitalInput.h"

DigitalInput dt = DigitalInput(1,STATE_PULLUP);

void setup() {}

void loop()
{
    dt.turnOn();
	dt.turnOff();
}