#include "Vilage2.h"
#include "City.h"
using namespace std;

int main()
{
	Place a(315.3, "Earth");
	Vilage b(120.6, "Selo", 15);
	Vilage2 c(120.6, "Selo", 133, "Petr");
	City d(913, "Kharkiv", 933413, "IDK");

	a.showInfo();
	cout << "---------------------------------------\n";
	b.showInfo();
	cout << "---------------------------------------\n";
	c.showInfo();
	cout << "---------------------------------------\n";
	d.showInfo();

}