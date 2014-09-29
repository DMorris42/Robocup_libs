/**
 * @file arm.h
 * @author Daniel Morris
 * @date 27/09/2014
 * @brief Code for controlling the collector arm using a stepper motor
 **/ 

#ifndef arm_h
#define arm_h

#include "Arduino.h"

enum ARM_STATE {
    upwards,
	downwards,
	arm_unknown
};

#define GEAR_RATIO 3

class Arm {
	public:
	//Contructor
	Arm(int dirpin, int steppin);
	
	//Set direction of rotation
	void arm_dir_up(void);
	void arm_dir_down(void);
	
	//Move arm by set distance
	void move_arm(unsigned int angle);
	
	//Fetcher for current direction of motion
	ARM_STATE get_current_arm_dir(void);
	
	ARM_STATE current_state;
	
	private:
	
	int _dirpin;  //Direction pin of motor
	int _steppin; //Step drive pin of motor
};

#endif
