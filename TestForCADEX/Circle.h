#ifndef _Circle_
#define _Circle_

#include <iostream>

const double PI = 3.1415926535897931;

class Circle {
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