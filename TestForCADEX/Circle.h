#ifndef _Circle_
#define _Circle_

#include "Curves.h"

class Circle : protected Curves {
protected:
	double R;
	
public:

	Circle();

	double GetRadius();
	   		
	type GetType();

	std::vector<double>* GetValue(double t);

	std::vector<double>* GetDerivative(double t);

};


#endif // !_Circle_