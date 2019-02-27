#pragma once

#include <iostream>

const double PI = 3.141592653589793238463;

class Curves {
public:
	virtual double GetArea() {
		return 1.0;
	}
	virtual void Print() {}

};
