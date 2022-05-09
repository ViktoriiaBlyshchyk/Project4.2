#pragma once
#include "Figure.h"

class Trapeze :
    public Figure
{
	double a, b, h;

public:
	Trapeze();
	Trapeze(double, double, double);
	~Trapeze() {};

	virtual double Area();
};