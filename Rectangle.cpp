#include "Rectangle.h"

Rectangle::Rectangle()
	: a(0), b(0)
{}

Rectangle::Rectangle(double a, double b)
	: a(a), b(b)
{}

double Rectangle::Area()
{
	return a * b;
}