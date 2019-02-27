#ifndef _Circle_
#define _Circle_

#include "Curves.h"

class Circle : public Curves {
protected: 
	double _Rad;
	double _Area;
public:
	Circle();

	Circle(double Radius);
	
	virtual double GetArea();
	
	virtual void Print();

	~Circle();
	
};

#endif // !_Circle_