#ifndef DigitalInput_h
#define DigitalInput_h

#include "stdint.h"

typedef enum State{
	STATE_INPUT,
	STATE_OUTPUT,
	STATE_PULLUP
};

class DigitalInput {
private:
	uint8_t _pin;
	State _state;
public:
	DigitalInput();
	DigitalInput(uint8_t pin,State state = STATE_OUTPUT);
	void turnOn();
	void turnOff();
};

#endif
