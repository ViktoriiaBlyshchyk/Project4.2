#pragma once
#include "Figure.h"

class Rectangle :
    public Figure
{
	double a, b;

public:
	Rectangle();
	Rectangle(double, double);
	~Rectangle() {};

	virtual double Area();
};