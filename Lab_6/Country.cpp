#include "Country.h"
#include "Car.h"

Country::Country(const char* country, const char* manufacturer, const char* car_model, float increase_index) {
	this->country = new char[strlen(country) + 1];
	this->manufacturer = new char[strlen(manufacturer) + 1];
	this->car_model = new char[strlen(car_model) + 1];
	strcpy(this->country, country);
	strcpy(this->manufacturer, manufacturer);
	strcpy(this->car_model, car_model);
	this->increase_index = increase_index;
}

Country::Country(const Country& other) {
	strcpy(this->country, other.country);
	strcpy(this->manufacturer, other.manufacturer);
	strcpy(this->car_model, other.car_model);
	this->increase_index = other.increase_index;
}

Country::~Country() {
	delete[] this->country;
	delete[] this->manufacturer;
	delete[] this->car_model;
}

void Country::add_data(const char* country, const char* manufacturer, const char* car_model, float increase_index) {
	this->country = new char[strlen(country) + 1];
	this->manufacturer = new char[strlen(manufacturer) + 1];
	this->car_model = new char[strlen(car_model) + 1];
	strcpy(this->country, country);
	strcpy(this->manufacturer, manufacturer);
	strcpy(this->car_model, car_model);
	this->increase_index = increase_index;
}