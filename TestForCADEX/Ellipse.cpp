#include "Ellipse.h"

Ellipse::Ellipse(double RH, double RW): Circle(RH) {
	if (RW > 0.0) {
		_Rwidth = RW;
	}
	else {
		std::cout << "Error. Second radius below zero..." << std::endl;
		_Rwidth = 1.0;
	}
	_Area = 0.0;
}

double Ellipse::GetArea() {
	if (_Area == 0.0) {
		_Area = _Rad * _Rwidth * PI;
	}
	return _Area;
}

void Ellipse::Print() {
	std::cout << "It's Ellipse\nRadius First: " << _Rad << " Radius Second: " << _Rwidth << std::endl;
	std::cout << GetArea() << std::endl << std::endl;
}

Ellipse::~Ellipse() {};
