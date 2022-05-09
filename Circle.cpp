#include "Circle.h"

Circle::Circle()
	: r(0)
{}

Circle::Circle(double r)
	: r(r)
{}

double Circle::Area()
{
	return pi * pow(r, 2);
}