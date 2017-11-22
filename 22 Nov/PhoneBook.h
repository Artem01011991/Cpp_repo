#pragma once

#include <vector>
#include <string>

class PhoneBook
{
public:
	PhoneBook();

	void PrintPhoneBook() const;
	void AddContact();
	void SaveToFile();
	std::vector<std::string> const& GET_contact() const;

private:
	std::vector<std::string> _contact;
};

enum 
{
	PRINT = 1, ADD, EXIT
};