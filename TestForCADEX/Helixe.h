#ifndef _Helixe_
#define _Helixe_

#include "Ellipse.h"

class Helixe : protected Ellipse {
protected:
<<<<<<< HEAD
	double R, speed;
	std::vector<double> value;
	std::vector<double> derivative;
=======
	double step;
	
>>>>>>> master
public:
	Helixe();
	
	virtual std::vector<double>* GetValue(double t);

	virtual std::vector<double>* GetDerivative(double t);

<<<<<<< HEAD
=======
	~Helixe();

>>>>>>> master
};


#endif // !_Helixe_