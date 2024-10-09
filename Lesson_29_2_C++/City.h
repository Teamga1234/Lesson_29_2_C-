#pragma once
#include "Vilage.h"
class City : public Vilage
{
protected:
	string name_measures;
public:
	City();
	City(float area, string name, int count, string name_measures);
	void showInfo()const;
};

