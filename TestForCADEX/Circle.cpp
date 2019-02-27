#include "Circle.h"

Circle::Circle(double Radius = 1.0) {
	if (Radius > 0.0) {
		_Rad = Radius;
	}
	else {
		std::cout << "Error. Radius below zero..." << std::endl;
		_Rad = 1.0;
	}
	_Area = 0.0;
}

double Circle::GetArea() {
	if (_Area == 0.0) {
		_Area = PI * PI * _Rad;
	}
	
	return _Area;
}

void Circle::Print() {
	std::cout << "It's circle\nRadius: " << _Rad << std::endl;
	std::cout << GetArea() << std::endl << std::endl;
}

Circle::~Circle() {};
