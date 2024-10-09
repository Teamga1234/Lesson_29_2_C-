#include "Vilage.h"

Vilage::Vilage(): Place()
{
	
	count_people = 0;
}

Vilage::Vilage(float area, string name, int count) : Place(area, name)
{
	count_people = count;
}

void Vilage::showInfo() const
{
	Place::showInfo();
	cout << "Count of people: " << count_people << endl;
}
