#pragma once
#include "Figure.h"

class RightTriangle :
    public Figure
{
	double a, b;

public:
	RightTriangle();
	RightTriangle(double, double);
	~RightTriangle() {};

	virtual double Area();
};