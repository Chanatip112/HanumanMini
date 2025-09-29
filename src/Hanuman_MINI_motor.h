//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/*
 *
 *	File	    	: 	Hanuman_MINI_motor.h
 *	Release 		:	  v0.1
 *
 *	Created on	:	  27 Sep 2025
 *		  Author	:	  Chanatip112
 *
 */
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#ifndef HANUMAN_MINI_MOTOR_H
#define HANUMAN_MINI_MOTOR_H

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include "hii.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void motor(int ch, int pow) {
  pow = constrain(pow, -100, 100);
  int dir = pow > 0 ? 1 : 0;

  int pwm = map(abs(pow), 0, 100, 0, 255);
  if ((ch < 1) || (ch > 2)) {
    return;  // skip invaild ch
  }
  if (ch == 1) {

    pinMode(Pin_PWM_A, OUTPUT);
    pinMode(Pin_IN1_A, OUTPUT);
    pinMode(Pin_IN2_A, OUTPUT);

    analogWrite(Pin_PWM_A, pwm);
    digitalWrite(Pin_IN1_A, dir);
    digitalWrite(Pin_IN2_A, !dir);
  } else {
    pinMode(Pin_PWM_B, OUTPUT);
    pinMode(Pin_IN1_B, OUTPUT);
    pinMode(Pin_IN2_B, OUTPUT);

    analogWrite(Pin_PWM_B, pwm);
    digitalWrite(Pin_IN1_B, dir);
    digitalWrite(Pin_IN2_B, !dir);
  }
}

void fd(int spd) {
  motor(1, abs(spd));
  motor(2, abs(spd));
}

void fd2(int spd1, int spd2) {
  motor(1, abs(spd1));
  motor(2, abs(spd2));
}

void bk(int spd) {
  motor(1, -abs(spd));
  motor(2, -abs(spd));
}

void bk2(int spd1, int spd2) {
  motor(1, -abs(spd1));
  motor(2, -abs(spd2));
}

void sr(int spd) {
  motor(1, abs(spd));
  motor(2, -abs(spd));
}

void sl(int spd) {
  motor(1, -abs(spd));
  motor(2, abs(spd));
}

void ao() {
  motor(1, 0);
  motor(2, 0);
}



#endif