#include "Ellipse.h"

Ellipse::Ellipse(double RH, double RW) {
	Circle::Circle(RH);
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

Ellipse::~Ellipse() {};
