#ifndef _Ellipse_
#define _Ellipse_

#include "Circle.h"

class Ellipse : public Circle {
protected:
	double _Rwidth;
public:

	Ellipse(double RH, double RW);
	
	virtual double GetArea();

	~Ellipse();

};

#endif // !_Ellipse_