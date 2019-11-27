#pragma once
#include "Country.h"
#include "body.h"
#include "Engine.h"
#include "Interface.h"
#include <iostream>
#include "windows.h"
#include "audiere.h" 


class Car: public Country, public Body, public Engine, public Interface
{
public:

	Car() {}

	void add_data(const Country& country, const Body& body, const Engine& engine);
	void print_data();
	void turn_on();
	void turn_off();
	void acceleration();
	void braking();
	void turn_left();
	void turn_right();
	void open_door();
};

