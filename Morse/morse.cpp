/** 
 * @file morse.cpp
 * @author Daniel Morris
 * @date 01/10/2014
 * @brief Implementation of code to control movement of the rack and pinion
 * for the collection tray via a stepper motor
 **/

#include "morse.h"


Morse::Morse (int pin) {
	_LED_pin = pin;
	pinMode(_LED_pin, OUTPUT);
}

void Morse::set_element_length (unsigned int length) {
	_unit_length = length;
}

void Morse::dot (void) {
	digitalWrite(_LED_pin, HIGH);
    delay(_unit_length);
    digitalWrite(_LED_pin, LOW);
    delay(_unit_length);
}

void Morse::dash (void) {
	digitalWrite(_LED_pin, HIGH);
    delay(3*_unit_length);
    digitalWrite(_LED_pin, LOW);
    delay(3*_unit_length);
}

void Morse::a (void) {
	dot();
	dash();
}

void Morse::b (void) {
	dash();
	dot();
	dot();
	dot();
}

void Morse::c (void) {
	dash();
	dot();
	dash();
	dot();
}

void Morse::d (void) {
	dash();
	dot();
	dot();
}

void Morse::e (void) {
	dot();
}

void Morse::f (void) {
	dot();
	dot();
	dash();
	dot();
}

void Morse::g (void) {
	dash();
	dash();
	dot();
}

void Morse::h (void) {
	dot();
	dot();
	dot();
	dot();
}

void Morse::i (void) {
	dot();
	dot();
}

void Morse::j (void) {
	dot();
	dash();
	dash();
	dash();
}

void Morse::k (void) {
	dash();
	dot();
	dash();
}

void Morse::l (void) {
	dot();
	dash();
	dot();
	dot();
}

void Morse::m (void) {
	dash();
	dash();
}

void Morse::n (void) {
	dash();
	dot();
}

void Morse::o (void) {
	dash();
	dash();
	dash();
}

void Morse::p (void) {
	dot();
	dash();
	dash();
	dot();
}

void Morse::q (void) {
	dash();
	dash();
	dot();
	dash();
}

void Morse::r (void) {
	dot();
	dash();
	dot();
}

void Morse::s (void) {
	dot();
	dot();
	dot();
}

void Morse::t (void) {
	dash();
}

void Morse::u (void) {
	dot();
	dot();
	dash();
}

void Morse::v (void) {
	dot();
	dot();
	dot();
	dash();
}

void Morse::w (void) {
	dot();
	dash();
	dash();
}

void Morse::x (void) {
	dash();
	dot();
	dot();
	dash();
}

void Morse::y (void) {
	dash();
	dot();
	dash();
	dash();
}

void Morse::z (void) {
	dash();
	dash();
	dot();
	dot();
}

void Morse::zero (void) {
	dash();
	dash();
	dash();
	dash();
	dash();
}

void Morse::one (void) {
	dot();
	dash();
	dash();
	dash();
	dash();
}

void Morse::two (void) {
	dot();
	dot();
	dash();
	dash();
	dash();
}

void Morse::three (void) {
	dot();
	dot();
	dot();
	dash();
	dash();
}

void Morse::four (void) {
	dot();
	dot();
	dot();
	dot();
	dash();
}

void Morse::five (void) {
	dot();
	dot();
	dot();
	dot();
	dot();
}

void Morse::six (void) {
	dash();
	dot();
	dot();
	dot();
	dot();
}

void Morse::seven (void) {
	dash();
	dash();
	dot();
	dot();
	dot();
}

void Morse::eight (void) {
	dash();
	dash();
	dash();
	dot();
	dot();
}

void Morse::nine (void) {
	dash();
	dash();
	dash();
	dash();
	dot();
}

void Morse::element_space (void) {
	delay(_unit_length);
}

void Morse::letter_space (void) {
	delay(3*_unit_length);
}

void Morse::word_space (void) {
	delay(7*_unit_length);
}
