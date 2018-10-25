#pragma once

#include "Curves.h"


static class CircleFactory {
public:	

	static Curves* Create() {
		return  (Curves*)new Circle();
	}

};
