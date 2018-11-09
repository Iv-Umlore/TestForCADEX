#include "Ellipse.h"

Ellipse::Ellipse() {
	
	Circle();
	Ctype = ellipse;

	Rb = fRand(0.5, 5.0);

	while (Ra == Rb) {
		Rb = fRand(0.5, 5.0);
	}
	
};

std::vector<double>* Ellipse::GetValue(double t) {	

	value[0] = x + Ra * sin(t);
	value[1] = y + Rb * cos(t);
	value[2] = 0;

	return &value;

};

std::vector<double>* Ellipse::GetDerivative(double t) {	

	derivative[0] = -Ra * cos(t);
	derivative[1] = Rb * sin(t);
	derivative[2] = 0;

	return &derivative;

};

Ellipse::~Ellipse() {
	Circle::~Circle();
};
