#pragma once
class Interface
{
public:
	void virtual turn_on() = 0;
	void virtual turn_off() = 0;
	void virtual acceleration() = 0;
	void virtual braking() = 0;
	void virtual turn_left() = 0;
	void virtual turn_right() = 0;
	void virtual open_door() = 0;
};

