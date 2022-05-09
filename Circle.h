#pragma once
#include "Figure.h"

class Circle :
    public Figure
{
	double r;
	double pi = 3.14;

public:
	Circle();
	Circle(double);
	~Circle() {};

	virtual double Area();
};

