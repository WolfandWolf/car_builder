#pragma once
#include "Interface.h"

class Human
{
public:
	void turn_on(Interface & vechicle);
	void turn_off(Interface& vechicle);
	void acceleration(Interface& vechicle);
	void braking(Interface& vechicle);
	void turn_left(Interface& vechicle);
	void turn_right(Interface& vechicle);
	void open_door(Interface& vechicle);
};

