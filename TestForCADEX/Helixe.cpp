#include "Helixe.h"

Helixe::Helixe() {
	Ctype = helixe;

	z = fRand(-randMax, randMax);
	
	R = fRand(0.5, 6.0);
	// Так как число Pi в этой реализации округлённое, при выполнении 
	// значение уходит за границу.
	x = 0.01; //fRand(-randMax, randMax);
	y = -R + 0.01; // Аналогично с выходом за границу

	speed = fRand(0.5, 3.0);

	value = std::vector<double>(3);
	derivative = std::vector<double>(3);

}

type Helixe::GetType() {
	return Ctype;
}

std::vector<double>* Helixe::GetValue(double t) {

	value[0] = x + R * sin(t);
	value[1] = y + R * cos(t);
	value[2] = z + speed * t;

	return &value;

}

std::vector<double>* Helixe::GetDerivative(double t) {
	
	derivative[0] = -R * cos(t);
	derivative[1] = R * sin(t);
	derivative[2] = speed;

	return &derivative;

}
