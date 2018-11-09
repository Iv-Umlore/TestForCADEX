#ifndef _Helixe_
#define _Helixe_

#include "Ellipse.h"

class Helixe : protected Ellipse {
public:

	double step;

	Helixe();
	
	virtual std::vector<double>* GetValue(double t);

	virtual std::vector<double>* GetDerivative(double t);

	~Helixe();

};


#endif // !_Helixe_