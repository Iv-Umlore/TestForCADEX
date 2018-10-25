#pragma once


#include "Curves.h"
#include "Helixe.h"


static class HelixeFactory {
public:

	static Curves* Create() {
		return  (Curves*)new Helixe();
	}

};