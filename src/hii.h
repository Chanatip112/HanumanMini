//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
 *
 *	File		    : 	hii.h
 *	Release		  :	  v0.1
 *
 *	Created on	:   27 Sep 2025
 *		  Author	:   Chanatip112
 *
 */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#ifndef Hii_H
#define Hii_H

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <Arduino.h>

#include<Servo.h>
Servo myservo;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#define _BaudRate 115200

#define Pin_PWM_A 5
#define Pin_IN1_A 3
#define Pin_IN2_A 4

#define Pin_PWM_B 6
#define Pin_IN1_B 7
#define Pin_IN2_B 2

#define _SW 8 

enum {
  _A0 = 100,
  _A1,
  _A2,
  _A3,
  _A4,
  _A5,
  _A6,
  _A7,
  _A8,
  _A9
};

#define LOGIC_HIGH_THRESHOLD (200)

#define ANALOG_MUX_S0_PIN (12)
#define ANALOG_MUX_S1_PIN (11)
#define ANALOG_MUX_S2_PIN (10)


#endif  
