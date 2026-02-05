//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
 *
 *	File	    	:	  Hanuman_MINI_Servo.h
 *	Release		  : 	v0.4
 *
 *	Created on	:	  5 Feb 2026
 *		  Author	:	  Chanatip112
 *
 */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#ifndef HANUMAN_MINI_SERVO_H
#define HANUMAN_MINI_SERVO_H

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include "hii.h"

#include<Servo.h>
Servo servo_pin_9;
Servo servo_pin_10;
Servo servo_pin_11;
Servo servo_pin_12;
Servo servo_pin_13;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void servo(int ch, int deg) {
  if (ch < 9 || ch > 13){
    return;
  }

  switch(ch){
    case 9:
      servo_pin_9.attach(9);
      deg = constrain(deg, 0, 180);
      servo_pin_9.write(deg);
      break;
    case 10:
      servo_pin_10.attach(10);
      deg = constrain(deg, 0, 180);
      servo_pin_10.write(deg);
      break;
    case 11:
      servo_pin_11.attach(11);
      deg = constrain(deg, 0, 180);
      servo_pin_11.write(deg);
      break;
    case 12:
      servo_pin_12.attach(12);
      deg = constrain(deg, 0, 180);
      servo_pin_12.write(deg);
      break;
    case 13:
      servo_pin_13.attach(13);
      deg = constrain(deg, 0, 180);
      servo_pin_13.write(deg);
      break;
  }
}



#endif