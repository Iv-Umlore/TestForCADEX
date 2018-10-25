#pragma once

#include "Curves.h"
#include "Ellipse.h"


static class EllipseFactory {
public:

	static Curves* Create() {
		return  (Curves*)new Ellipse();
	}

};

