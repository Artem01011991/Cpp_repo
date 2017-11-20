#include "Digital.h"
#include <iostream>
#include <Windows.h>

void Digital_counter::increment() {
	std::cout << "Enter min and max values." << std::endl;
	int min, max;
	std::cin >> min >> max;
	counter = min;

	while (true)
	{
		std::cout << counter << std::endl;
	
		if (counter >= max)
		{
			counter = 0;
			break;
		}
		Sleep(1000);
		++counter;
	}
}

int main()
{
	Digital_counter obj;

	obj.increment();
	std::cout << "Counter have completed the work." << std::endl;

	return 0;
}