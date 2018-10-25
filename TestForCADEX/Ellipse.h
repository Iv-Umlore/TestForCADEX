#ifndef _Ellipse_
#define _Ellipse_

#include "Curves.h"

class Ellipse : protected Curves {
protected:
	double widthP, heightP;
public:

	Ellipse();

	type GetType();

	std::vector<double>* GetValue(double t);

	std::vector<double>* GetDerivative(double t);


};

#endif // !_Ellipse_