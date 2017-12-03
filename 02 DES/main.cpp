#include "Figures.h"
#include <iostream>


int main()
{
	int choice;
	Figures_Square obj;
	
	while (true)
	{
		std::cout << "Choose a figure" << std::endl;
		std::cout << "1.Square\n2.Triangle\n3.Rectangle\n4.Computation amount\n5.Exit" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case SQ:
			std::cout << "Enter a square side length." << std::endl;
			int side;
			std::cin >> side;
			std::cout << "Square of square equal " << obj.square_square_calculation(side) << std::endl;
			break;
		case TRI:
			std::cout << "Enter a height and a side to height." << std::endl;
			int tri_side;
			int height;
			std::cin >> tri_side >> height;
			std::cout << "Square of triangle equal " << obj.triangle_square_calculation(height, tri_side) << std::endl;
			break;
		case REC:
			std::cout << "Enter two sides of rectangle." << std::endl;
			int side1;
			int side2;
			std::cin >> side1 >> side2;
			std::cout << "Square of rectangle equal " << obj.rectangle_square_calculation(side1, side2) << std::endl;
			break;
		case COMP_COUNT:
			std::cout << obj.GET_square_calculation_count() << std::endl;
			break;
		case EXIT:
			return 0;
		}
	}

	return 0;
}