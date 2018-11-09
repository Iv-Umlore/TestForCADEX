#include "Helixe.h"

Helixe::Helixe() {

	Ellipse();

	Ctype = helixe;

	z = 0;	
	// ��� ��� ����� Pi � ���� ���������� ����������, ��� ���������� 
	// �������� ������ �� �������.
	x = 0.0001;
	y = -Ra + 0.0001; // ���������� � ������� �� �������

	step = fRand(1.0, 9.0);
	
}

std::vector<double>* Helixe::GetValue(double t) {

	value[0] = x + Ra * sin(t);
	value[1] = y + Rb * cos(t);
	value[2] = z + step * t / 2 / PI;

	return &value;

}

std::vector<double>* Helixe::GetDerivative(double t) {
	
	derivative[0] = -Ra * cos(t);
	derivative[1] = Rb * sin(t);
	derivative[2] = step / 2 / PI;

	return &derivative;

}

Helixe::~Helixe() {
	Ellipse::~Ellipse();
}
