#include "Human.h"

void Human::turn_on(Interface & vechicle) {
	vechicle.turn_on();
}

void Human::turn_off(Interface& vechicle) {
	vechicle.turn_off();
}

void Human::acceleration(Interface& vechicle) {
	vechicle.acceleration();
}

void Human::braking(Interface& vechicle) {
	vechicle.braking();
}
void Human::turn_left(Interface& vechicle) {
	vechicle.turn_left();
}

void Human::turn_right(Interface& vechicle) {
	vechicle.turn_right();
}

void Human::open_door(Interface& vechicle) {
	vechicle.open_door();
}