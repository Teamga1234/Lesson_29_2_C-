#pragma once
#include "Place.h"
class Vilage : public Place
{
protected:
	int count_people;
public:
	Vilage();
	Vilage(float area, string name, int count);
	void showInfo()const;

};

