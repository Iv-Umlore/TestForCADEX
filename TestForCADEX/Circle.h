#ifndef _Circle_
#define _Circle_

#include "Curves.h"

class Circle : protected Curves {
protected:
	double Ra;
	
public:

	Circle();

	double GetRadius();
	   		
	virtual std::vector<double>* GetValue(double t);

	virtual std::vector<double>* GetDerivative(double t);

	bool operator()(Circle& first, Circle& second);
	
	~Circle();
	
};



#endif // !_Circle_