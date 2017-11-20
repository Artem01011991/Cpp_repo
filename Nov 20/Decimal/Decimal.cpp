#include "Decimal.h"
#include <iostream>


Decimal::Decimal() {
	std::cout << "Object has created.\n" << std::endl;
}

Decimal::~Decimal() {
	std::cout << "\nObject has deleted.\n" << std::endl;
}

void Decimal::initial_attr() {
	std::cout << "Enter two number.\n" << std::endl;
	std::cin >> _numerator >> _denominator;
}

void Decimal::addition() {
	std::cout << "\naddition " << _numerator + _denominator << std::endl;
}

void Decimal::subtration() {
	std::cout << "\nsubtration " << _numerator - _denominator << std::endl;
}

void Decimal::multiplication() {
	std::cout << "\nmultiplication " << _numerator * _denominator << std::endl;
}

void Decimal::divition() {
	std::cout << "\ndivition " <<_numerator / _denominator << std::endl;
}


int main()
{
	Decimal obj;
	obj.initial_attr();
	obj.addition();
	obj.subtration();
	obj.multiplication();
	obj.divition();

	return 0;
}