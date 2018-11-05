#ifndef _Circle_
#define _Circle_

#include "Curves.h"

class Circle : protected Curves {
protected:
	double Ra;
	
public:

	Circle();

	double GetRadius() const;
	   		
	std::vector<double>* GetValue(double t);

	std::vector<double>* GetDerivative(double t);

	bool operator<(const Circle * second) const;

	~Circle();
	
};


#endif // !_Circle_