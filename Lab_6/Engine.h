#pragma once
#include <string>
#pragma warning(disable:4996)

class Engine
{
public:
	char* engine_type;
	float power;

	Engine(const char* engine_type, float power);
	Engine(const Engine& other);
	Engine() {}
	~Engine();

	void add_data(const char* engine_type, float power);
};

