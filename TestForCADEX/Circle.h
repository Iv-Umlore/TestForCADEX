#ifndef _Circle_
#define _Circle_

#include "Curves.h"

class Circle : public Curves {
protected: 
	double _Rad;
	double _Area;
public:

	Circle(double Radius);
	
	virtual double GetArea();
		
	~Circle();
	
};

#endif // !_Circle_