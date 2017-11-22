#include "PhoneBook.h"
#include <iostream>

PhoneBook::PhoneBook() {
	std::ifstream file;
	file.open("PhoneBook.txt", std::ios::app | std::ios::in);
	std::string line;
	
	while (getline(file, line))
	{
		_contact.push_back(line);
	}
		
	file.close();
}

std::vector<std::string> const& PhoneBook::GET_contact() const {
	return _contact;
}

void PhoneBook::PrintPhoneBook() const {
	for (std::string str : _contact)
	{
		std::cout << str << std::endl;
	}
}

void PhoneBook::AddContact() {
	std::string data;

	std::cout << "Enter person's name." << std::endl;
	std::cin >> data;
	data += ' ';
	_contact.push_back(data);

	std::cout << "Enter person's nuber." << std::endl;
	std::cin >> data;
	_contact.back().append(data);
}

void PhoneBook::SaveToFile() {
	std::ofstream file;
	file.open("PhoneBook.txt", std::ios::app);

	for (std::string cont : _contact) {
		file << cont + '\n';
	}

	file.close();
}

