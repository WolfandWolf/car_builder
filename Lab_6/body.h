#pragma once
#include <string>
#pragma warning(disable:4996)

class Body
{
public:
	char* body_type;

	
	Body(const char* body_type);
	Body(const Body& other);
	Body() {}
	~Body();

	void add_data(const char* body_type);
};

