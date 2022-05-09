#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapeze.h"

using namespace std;

int main()
{
	Rectangle a(2, 3);
	cout << "Area of Rectangle: " << a.Area() << endl;

	Circle b(3);
	cout << "Area of Circle: " << b.Area() << endl;

	RightTriangle c(3, 4);
	cout << "Area of RightTriangle: " << c.Area() << endl;

	Trapeze d(2, 3, 4);
	cout << "Area of Trapeze: " << d.Area() << endl << endl;

	Figure* x = new Rectangle();
	Figure* y = new Circle();
	Figure* z = new RightTriangle();
	Figure* q = new Trapeze();

	cout << typeid(x).name() << endl;
	cout << typeid(*x).name() << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(*y).name() << endl;
	cout << typeid(z).name() << endl;
	cout << typeid(*z).name() << endl;
	cout << typeid(q).name() << endl;
	cout << typeid(*q).name() << endl << endl;

	Figure* arr[4] = { new Rectangle(a), new Circle(b), new RightTriangle(c), new Trapeze(d) };
	for (int k = 0; k < 4; k++)
		cout << arr[k]->Area() << endl;

	return 0;
}