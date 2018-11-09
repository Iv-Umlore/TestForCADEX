#include "Circle.h"

Circle::Circle() {
	Ctype = circle;

	z = 0;
	x = fRand(-randMax, randMax);
	y = fRand(-randMax, randMax);
	Ra = fRand(1.0, 10.0);

	value = std::vector<double>(3);
	derivative = std::vector<double>(3);

};

double Circle::GetRadius() const{
<<<<<<< HEAD
	return R;
}

type Circle::GetType() {
	return Ctype;
=======
	return Ra;
>>>>>>> master
}

std::vector<double>* Circle::GetValue(double t) {

	value[0] = x + Ra * cos(t);
	value[1] = y + Ra * sin(t);
	value[2] = 0;

	return &value;
};

std::vector<double>* Circle::GetDerivative(double t) {

	derivative[0] = -Ra * sin(t);
	derivative[1] = Ra * cos(t);
	derivative[2] = 0;

	return &derivative;
};

<<<<<<< HEAD
bool Circle::operator()(Circle& first, Circle& second) {
	if (first.GetRadius() < second.GetRadius())
		return true;
	else return false;
}

// true/false for sort 1 to 10/ 10 to 1

bool Circle::operator<(const Circle& _Right) const {
	return (this->GetRadius() < _Right.GetRadius()) ? true : false;
}


template<>
void std::swap<Circle, Circle>(Circle& lhs, Circle& rhs)
{
	Circle tmp;
	tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}
=======
bool Circle::operator<(const Circle & second) const {
	return (this->GetRadius() < second.GetRadius()) ? true : false;
}


Circle::~Circle() {
	Curves::~Curves();
};
>>>>>>> master
