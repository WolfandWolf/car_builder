#include "Car.h"
#include <windows.h>
#pragma comment(lib, "winmm.lib")
using namespace audiere;

void Car::add_data(const Country& country, const Body& body, const Engine& engine) {
	this->country = new char[strlen(country.country) + 1];
	this->manufacturer = new char[strlen(country.manufacturer) + 1];
	this->car_model = new char[strlen(country.car_model) + 1];
	this->body_type = new char[strlen(body.body_type) + 1];
	this->engine_type = new char[strlen(engine.engine_type) + 1];

	strcpy(this->country, country.country);
	strcpy(this->manufacturer, country.manufacturer);
	strcpy(this->car_model, country.car_model);
	this->increase_index = country.increase_index;

	strcpy(this->body_type, body.body_type);

	strcpy(this->engine_type, engine.engine_type);
	this->power = country.increase_index * engine.power;
}

void Car::print_data() {
	std::cout << "Полученное авто   " << std::endl;
	std::cout << std::endl;
	std::cout << "Страна производитель: " << this->country << std::endl;
	std::cout << "Наименование производителя: " << this->manufacturer << std::endl;
	std::cout << "Модель: " << this->car_model << std::endl;
	std::cout << "Тип кузова: " << this->body_type << std::endl;
	std::cout << "Тип двигателя: " << this->engine_type << std::endl;
	std::cout << "Мощность: " << this->power << std::endl;
}

void Car::turn_on() {
	LPCWSTR track = L"play turn_on.mp3 wait";
	mciSendString(track, NULL, 0, NULL);
}

void Car::turn_off() {
	LPCWSTR track = L"play turn_off.mp3 wait";
	mciSendString(track, NULL, 0, NULL);
}

void Car::acceleration() {
	LPCWSTR track = L"play acceleration.mp3 wait";
	mciSendString(track, NULL, 0, NULL);
}

void Car::braking() {
	LPCWSTR track = L"play braking.mp3 wait";
	mciSendString(track, NULL, 0, NULL);
}

void Car::turn_left() {
	LPCWSTR track = L"play turn.mp3 wait";
	mciSendString(track, NULL, 0, NULL);
}

void Car::turn_right() {
	LPCWSTR track = L"play turn.mp3 wait";
	mciSendString(track, NULL, 0, NULL);
}

void Car::open_door() {
	LPCWSTR track = L"play open_car.mp3 wait";
	mciSendString(track, NULL, 0, NULL);
}