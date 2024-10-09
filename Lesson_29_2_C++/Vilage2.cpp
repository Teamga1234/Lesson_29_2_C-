#include "Vilage2.h"

Vilage2::Vilage2(): Vilage()
{
	name_admin = "none";
}

Vilage2::Vilage2(float area, string name, int count, string name_adm)
	:Vilage(area, name, count)
{
	name_admin = name_adm;
}

void Vilage2::showInfo() const
{
	Vilage::showInfo();
	cout << "Admin`s name: " << name_admin << endl;
}
