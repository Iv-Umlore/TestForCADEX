#include "Helixe.h"

Helixe::Helixe() {
	Ctype = helixe;

	z = fRand(-randMax, randMax);
	x = fRand(-randMax, randMax);
	y = fRand(-randMax, randMax);
	widthP = fRand(0.5, 5.0);
	heightP = fRand(0.5, 5.0);
	speed = fRand(0.5, 3.0);

	value = std::vector<double>(3);
	derivative = std::vector<double>(3);

}

type Helixe::GetType() {
	return Ctype;
}

std::vector<double>* Helixe::GetValue(double t) {

	value[0] = x + widthP * sin(t);
	value[1] = y + heightP * cos(t);
	value[2] = speed * t;

	return &value;

}

std::vector<double>* Helixe::GetDerivative(double t) {
	
	derivative[0] = -widthP * cos(t);
	derivative[1] = heightP * sin(t);
	derivative[2] = speed;

	return &derivative;

}