#include "Engine.h"


Engine::Engine(const char* engine_type, float power) {
	this->engine_type = new char[strlen(engine_type) + 1];
	strcpy(this->engine_type, engine_type);
	this->power = power;
}

Engine::Engine(const Engine& other) {
	strcpy(this->engine_type, other.engine_type);
	this->power = other.power;
}

Engine::~Engine() {
	delete[] this->engine_type;
}

void Engine::add_data(const char* engine_type, float power) {
	this->engine_type = new char[strlen(engine_type) + 1];
	strcpy(this->engine_type, engine_type);
	this->power = power;
}
