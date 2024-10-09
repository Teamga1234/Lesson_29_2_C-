#include "City.h"

City::City():Vilage()
{
	name_measures = "none";
}

City::City(float area, string name, int count, string name_measures)
	:Vilage(area, name, count)
{
	this->name_measures = name_measures;
}

void City::showInfo() const
{
	Vilage::showInfo();
	cout << "Measure`s name: " << name_measures << endl;
}
