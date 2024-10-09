#include "Place.h"

Place::Place()
{
	area = 0;
	name = "none";
}

Place::Place(float x, string name)
{
	area = x;
	this->name = name;
}

void Place::showInfo() const
{
	cout << "Name: " << name << endl;
	cout << "Area: " << area << endl;

}
