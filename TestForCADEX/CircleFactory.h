#pragma once

#include "CurvesFactory.h"
#include "Circle.h"


static class CircleFactory : public CurvesFactory {
public:	

	static Curves* Create() {
		return  (Curves*)new Circle();
	}

};
