#ifndef _Circle_
#define _Circle_

#include "Curves.h"

class Circle : protected Curves {
protected:
	double Ra;
	
public:

	Circle();
<<<<<<< HEAD

=======
	
>>>>>>> master
	double GetRadius() const;
	   		
	virtual std::vector<double>* GetValue(double t);

	virtual std::vector<double>* GetDerivative(double t);

	bool operator<(const Circle & second) const;

<<<<<<< HEAD
	bool operator()(Circle& first, Circle& second);

	// metod for library xstddef, project don't work without it
	bool operator<(const Circle& _Right) const;

=======
	~Circle();
	
>>>>>>> master
};



#endif // !_Circle_