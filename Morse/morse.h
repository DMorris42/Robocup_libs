/**
 * @file morse.h
 * @author Daniel Morris
 * @date 01/10/2014
 * @brief Code for implementing morse code on LED in parallel with magnet
          Note that this code blocks.
 **/ 

#ifndef MORSE_H
#define MORSE_H

#include "Arduino.h"

class Morse {
	public:
	
	//Constructor
	Morse(int pin);
	
	//Primitives (dot and dash)
	void dot(void);
	void dash(void);
	
	//Letters and numbers
	void a(void);
	void b(void);
	void c(void);
	void d(void);
	void e(void);
	void f(void);
	void g(void);
	void h(void);
	void i(void);
	void j(void);
	void k(void);
	void l(void);
	void m(void);
	void n(void);
	void o(void);
	void p(void);
	void q(void);
	void r(void);
	void s(void);
	void t(void);
	void u(void);
	void v(void);
	void w(void);
	void x(void);
	void y(void);
	void z(void);
	
	void zero(void);
	void one(void);
	void two(void);
	void three(void);
	void four(void);
	void five(void);
	void six(void);
	void seven(void);
	void eight(void);
	void nine(void);
	
	private:
	
	int _LED_pin;
};

#endif
