#include <iostream>
#include "DigitalInput.h"

using namespace std;

DigitalInput::DigitalInput(){
	_pin = -1;
	_state = STATE_OUTPUT;
}

DigitalInput::DigitalInput(uint8_t pin,State state){
	_pin = pin;
	_state = state;
}

void DigitalInput::turnOff(){
	if(_pin >= 0){
		printf("turnOff(): [_pin]=> %d [_state]=> %d",_pin,_state);
	}else{
		throw "Hardware PIN must be define.";
	}
}

void DigitalInput::turnOn(){
	if(_pin >= 0){
		printf("turnOn(): [_pin]=> %d [_state]=> %d",_pin,_state);
	}else{
		throw "Hardware PIN must be define.";
	}
}
