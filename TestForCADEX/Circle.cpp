#include "Circle.h"

Circle::Circle() {
	Ctype = circle;

	z = 0;
	x = fRand(-randMax, randMax);
	y = fRand(-randMax, randMax);
	R = fRand(1.0, 10.0);

	value = std::vector<double>(3);
	derivative = std::vector<double>(3);

};

double Circle::GetRadius() const{
	return R;
}

type Circle::GetType() {
	return Ctype;
}

std::vector<double>* Circle::GetValue(double t) {

	value[0] = x + R * cos(t);
	value[1] = y + R * sin(t);
	value[2] = 0;

	return &value;
};

std::vector<double>* Circle::GetDerivative(double t) {

	derivative[0] = -R * sin(t);
	derivative[1] = R * cos(t);
	derivative[2] = 0;

	return &derivative;
};


bool Circle::operator()(Circle* first, Circle* second) {
	if (first->GetRadius() > second->GetRadius())
		return true;
	else return false;
}

bool Circle::operator<(const Circle& _Right) const {
	return (this->GetRadius() < _Right.GetRadius()) ? true : false;
}
/*
void swap(Circle* first, Circle* second) {

	Circle* point = nullptr;

	point = first;
	first = second;
	second = first;

}*/