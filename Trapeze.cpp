#include "Trapeze.h"

Trapeze::Trapeze()
	: a(0), b(0), h(0)
{}

Trapeze::Trapeze(double a, double b, double h)
	: a(a), b(b), h(h)
{}

double Trapeze::Area()
{
	return (a + b) * h / 2;
}