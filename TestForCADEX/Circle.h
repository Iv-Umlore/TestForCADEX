#ifndef _Circle_
#define _Circle_

#include <iostream>
#include "Curves.h"

class Circle : protected Curves {
protected:
	double R;
	
public:

	Circle();

	double GetRadius() const;
	   		
	type GetType();

	std::vector<double>* GetValue(double t);

	std::vector<double>* GetDerivative(double t);
	   	
	bool operator()(Circle* first, Circle* second);

	// metod for library xstddef, project don't work without it
	bool operator<(const Circle& _Right) const;

	   
};
// for TBB
//void std::swap(Circle& first, Circle& second);

#endif // !_Circle_