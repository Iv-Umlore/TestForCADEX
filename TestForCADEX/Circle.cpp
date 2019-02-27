#include "Circle.h"

Circle::Circle(double Radius) {
	if (Radius > 0.0) {
		_Rad = Radius;
	}
	else {
		std::cout << "Error. Radius below zero..." << std::endl;
		_Rad = 1;
	}
	_Area = 0.0;
}

double Circle::GetArea() {
	if (_Area == 0.0) {
		_Area = PI * PI * _Rad;
	}
	return _Area;
}

Circle::~Circle() {};
