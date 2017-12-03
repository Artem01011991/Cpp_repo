#include "Figures.h"


int Figures_Square::rectangle_square_calculation(int side1, int side2) {
	++_square_calculation_count;
	return side1 * side2;
}

int Figures_Square::square_square_calculation(int side) {
	++_square_calculation_count;
	return side * side;
}

double Figures_Square::triangle_square_calculation(int height, int side_to_height) {
	++_square_calculation_count;
	return 0.5 * side_to_height * height;
}

int Figures_Square::GET_square_calculation_count() const {
	return _square_calculation_count;
}
