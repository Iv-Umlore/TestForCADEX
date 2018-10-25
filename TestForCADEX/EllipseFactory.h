#pragma once

#include "CurvesFactory.h"
#include "Ellipse.h"


static class EllipseFactory : public CurvesFactory {
public:

	static Curves* Create() {
		return  (Curves*)new Ellipse();
	}

};

