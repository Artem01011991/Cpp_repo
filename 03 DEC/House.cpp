#include "House.h"
#include <string.h>
#include <iostream>

Human::Human(int name_size) {
	_name = (char*) new char[name_size];
}

Human::Human(const Human &obj) {
	_name = new char[strlen(obj._name) + 1];
	strcpy_s(_name, strlen(obj._name) + 1, obj._name);
}

Human::~Human() {
	delete _name;
}

void Human::SET_name() {
	std::cin >> _name;
}

char* Human::GET_name() const {
	return _name;
}


Flat::Flat(const Flat &obj) {
	_flat_count = obj._flat_count;
	_h_obj = (Human*) new Human[_flat_count];
}

Flat::Flat(int flat_num) {
	_flat_count = flat_num;
	_h_obj = (Human*) new Human[_flat_count];
}

Flat::~Flat() {
	delete _h_obj;
}

int Flat::GET_number() const {
	return _flat_count;
}