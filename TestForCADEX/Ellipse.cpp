#include "Ellipse.h"

Ellipse::Ellipse() {
	Ctype = ellipse;

	z = 0;
	x = fRand(-randMax, randMax);
	y = fRand(-randMax, randMax);
	widthP = fRand(0.5, 5.0);
	heightP = fRand(0.5, 5.0);
	while (widthP == heightP) {
		heightP = fRand(0.5, 5.0);
	}

	value = std::vector<double>(3);
	derivative = std::vector<double>(3);

};

type Ellipse::GetType() {
	return Ctype;
}

std::vector<double>* Ellipse::GetValue(double t) {	

	value[0] = x + widthP * sin(t);
	value[1] = y + heightP * cos(t);
	value[2] = 0;

	return &value;

};

std::vector<double>* Ellipse::GetDerivative(double t) {	

	derivative[0] = -widthP * cos(t);
	derivative[1] = heightP * sin(t);
	derivative[2] = 0;

	return &derivative;

};
