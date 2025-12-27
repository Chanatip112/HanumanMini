//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
 *
 *	File	    :	Hanuman_MINI_Multiplexer.cpp
 *	Release		:	v0.1
 *
 *	Created on	:	27 Dec 2025
 *		Author	:	Chanatip112
 *
 */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include "Hanuman_MINI_Multiplexer.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool Multiplexers::begin(
	uint8_t AnalogPin,
	uint8_t s0,
	uint8_t s1,
	uint8_t s2,
	uint8_t s3)
{

	//- mark pin
	_AnalogPin = AnalogPin;
	_s0 = s0;
	_s1 = s1;
	_s2 = s2;
	_s3 = s3;

	//- Set PIN Mode
	pinMode(_AnalogPin, INPUT);
	pinMode(_s0, OUTPUT);
	pinMode(_s1, OUTPUT);
	pinMode(_s2, OUTPUT);
	pinMode(_s3, OUTPUT);

	//>> Reset State
	digitalWrite(_s0, LOW);
	digitalWrite(_s1, LOW);
	digitalWrite(_s2, LOW);
	digitalWrite(_s3, LOW);

	//- ret status
	return true;
}

uint16_t Multiplexers::read(uint8_t Channel)
{
	if (Channel > 15) { return 0; }
	
	digitalWrite(_s0, ((Channel & 0x01) != 0));
	digitalWrite(_s1, ((Channel & 0x02) != 0));
	digitalWrite(_s2, ((Channel & 0x04) != 0));
	digitalWrite(_s3, ((Channel & 0x08) != 0));

	//? RETURN Receive Value
	return analogRead(_AnalogPin);
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~