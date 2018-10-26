#ifndef _Helixe_
#define _Helixe_

#include "Curves.h"

class Helixe : protected Curves {
protected:
	double R, speed;
	std::vector<double> value;
	std::vector<double> derivative;
public:
	Helixe();

	type GetType();

	std::vector<double>* GetValue(double t);

	std::vector<double>* GetDerivative(double t);

};


#endif // !_Helixe_