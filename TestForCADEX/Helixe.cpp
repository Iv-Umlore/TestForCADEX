#include "Helixe.h"

Helixe::Helixe() {

<<<<<<< HEAD
	z = fRand(-randMax, randMax);
	
	R = fRand(0.5, 6.0);
	// Так как число Pi в этой реализации округлённое, при выполнении 
	// значение уходит за границу.
	x = 0.01; // fRand(-randMax, randMax);
	y = -R + 0.01; // Аналогично с выходом за границу

	speed = fRand(0.5, 3.0);
=======
	Ellipse();
>>>>>>> master

	Ctype = helixe;

	z = 0;	
	// Так как число Pi в этой реализации округлённое, при выполнении 
	// значение уходит за границу.
	x = 0.0001;
	y = -Ra + 0.0001; // Аналогично с выходом за границу

	step = fRand(1.0, 9.0);
	
}

std::vector<double>* Helixe::GetValue(double t) {

<<<<<<< HEAD
	value[0] = x + R * sin(t);
	value[1] = y + R * cos(t);
	value[2] = z + speed * t;
=======
	value[0] = x + Ra * sin(t);
	value[1] = y + Rb * cos(t);
	value[2] = z + step * t / PI;
>>>>>>> master

	return &value;

}

std::vector<double>* Helixe::GetDerivative(double t) {
	
<<<<<<< HEAD
	derivative[0] = -R * cos(t);
	derivative[1] = R * sin(t);
	derivative[2] = speed;
=======
	derivative[0] = -Ra * cos(t);
	derivative[1] = Rb * sin(t);
	derivative[2] = step;
>>>>>>> master

	return &derivative;

}
<<<<<<< HEAD
=======

Helixe::~Helixe() {
	Ellipse::~Ellipse();
}
>>>>>>> master
