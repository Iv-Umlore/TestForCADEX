#pragma once


#include "CurvesFactory.h"
#include "Helixe.h"


static class HelixeFactory : public CurvesFactory{
public:

	static Curves* Create() {
		return  (Curves*)new Helixe();
	}

};