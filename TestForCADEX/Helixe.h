#ifndef _Helixe_
#define _Helixe_

#include "Ellipse.h"

class Helixe : protected Ellipse {
protected:
	double step;
	
public:
	Helixe();
	
	std::vector<double>* GetValue(double t);

	std::vector<double>* GetDerivative(double t);

	~Helixe();

};


#endif // !_Helixe_