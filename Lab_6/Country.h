#pragma once
#include <string>
#pragma warning(disable:4996)

class Country
{
public:
	char* country;
	char* manufacturer;
	char* car_model;
	float increase_index;

	Country(const char* country,const char* manufacturer, const char* car_model, float increase_index);
	Country(const Country& other);
	Country() {}
	~Country();

	void add_data(const char* country, const char* manufacturer, const char* car_model, float increase_index);
};

