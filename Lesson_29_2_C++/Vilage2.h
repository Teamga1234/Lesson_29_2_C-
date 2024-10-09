#pragma once
#include "Vilage.h"
class Vilage2 : public Vilage
{
protected:
	string name_admin;
public:
	Vilage2();
	Vilage2(float area, string name, int count, string name_adm);
	void showInfo()const;
};

