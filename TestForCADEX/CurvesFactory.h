#pragma once

#include "Curves.h"

static class CurvesFactory {
public:

	static Curves* Create() {
		return  new Curves();
	}

};
