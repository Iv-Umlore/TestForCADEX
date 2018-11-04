#ifndef _Ellipse_
#define _Ellipse_

#include "Circle.h"

class Ellipse : protected Circle {
protected:
	double Rb;

public:

	Ellipse();
	
	std::vector<double>* GetValue(double t);

	std::vector<double>* GetDerivative(double t);

	~Ellipse();

};

#endif // !_Ellipse_