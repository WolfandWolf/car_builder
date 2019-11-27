#include "body.h"

Body::Body(const char* body_type) {
	this->body_type = new char[strlen(body_type) + 1];
	strcpy(this->body_type, body_type);
}

Body::Body(const Body& other) {
	strcpy(this->body_type, other.body_type);
}

Body::~Body() {
	delete[] this->body_type;
}

void Body::add_data(const char* body_type) {
	this->body_type = new char[strlen(body_type) + 1];
	strcpy(this->body_type, body_type);
}
