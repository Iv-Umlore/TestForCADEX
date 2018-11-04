#include "Helixe.h"

Helixe::Helixe() {

	Ellipse();

	Ctype = helixe;

	z = fRand(-randMax, randMax);	
	// Так как число Pi в этой реализации округлённое, при выполнении 
	// значение уходит за границу.
	x = 0.0001 ; // fRand(-randMax, randMax);
	y = -Ra + 0.0001; // Аналогично с выходом за границу

	step = fRand(1.0, 9.0);
	
}

std::vector<double>* Helixe::GetValue(double t) {

	value[0] = x + Ra * sin(t);
	value[1] = y + Rb * cos(t);
	value[2] = z + step * t / PI;

	return &value;

}

std::vector<double>* Helixe::GetDerivative(double t) {
	
	derivative[0] = -Ra * cos(t);
	derivative[1] = Rb * sin(t);
	derivative[2] = step;

	return &derivative;

}

Helixe::~Helixe() {
	Ellipse::~Ellipse();
}
