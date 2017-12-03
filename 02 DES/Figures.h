#pragma once


class Figures_Square {
	int _square_calculation_count;

public:
	Figures_Square() : _square_calculation_count(0) {};


	int rectangle_square_calculation(int, int);
	int square_square_calculation(int);
	double triangle_square_calculation(int, int);
	int GET_square_calculation_count() const;
};


enum 
{
	SQ = 1, TRI, REC, COMP_COUNT, EXIT
};
