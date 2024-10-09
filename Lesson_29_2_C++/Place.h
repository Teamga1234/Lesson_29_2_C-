#pragma once
#include <iostream>
#include <string>
using namespace std;
class Place
{
protected:
	float area;
	string name;
public:
	Place();
	Place(float x, string name);
	void showInfo()const;
};

