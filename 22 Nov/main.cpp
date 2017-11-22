#include "PhoneBook.h"
#include <iostream>

int main()
{
	PhoneBook phonebook;
	int choice;

	while (true)
	{
		std::cout << "1.Show the phone book.\n"
			<< "2.Add new contact.\n"
			<< "3.Exit." << std::endl;
		std::cin >> choice;
		
		switch (choice)
		{
		case PRINT:
			phonebook.PrintPhoneBook();
			continue;
		case ADD:
			phonebook.AddContact();
			continue;
		case EXIT:
			phonebook.SaveToFile();
			exit(0);
		}
	}

	return 0;
}