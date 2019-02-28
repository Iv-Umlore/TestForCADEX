#ifndef _Ellipse_
#define _Ellipse_

#include "Circle.h"

// I know, that circle is special case of ellipse, but in this task 
// I can save some memory, when i do so

class Ellipse : public Circle {
protected:
	double _Rwidth;
public:

	Ellipse(double RH, double RW);
	
	virtual double GetArea();

	virtual void Print();

	~Ellipse();

};

#endif // !_Ellipse_