#ifndef _Curves_
#define _Curves_

#include <vector>
#include <math.h>
#include <random>
#include <time.h>

const double PI = 3.14159265;
const double randMax = 10.0;

enum type { circle, ellipse, helixe, curves};

class Curves {
protected:
	std::vector<double> value;
	std::vector<double>	derivative;
	double x, y, z;
	type Ctype;

public:
	
	double fRand(double fMin, double fMax)
	{		
		double f = (double)rand() / RAND_MAX;
		return fMin + f * (fMax - fMin);
	}

	virtual type GetType() { return curves; };

	virtual std::vector<double>* GetValue(double t) { return nullptr; };

	virtual std::vector<double>* GetDerivative(double t) { return nullptr; };

};

#endif // !_Curves_