#include "wine.h"
#include "wine_comp.h"
#include "wine_inh.h"

#include <iostream>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;

	cout << "Enter name of wine: ";
	char lab[50] = "";
	cin.getline(lab, 50);
	cout << "Enter number of years: ";
	int yrs{0};
	cin >> yrs;

	WineComp holding1(lab, yrs);
	holding1.getBottles();
	holding1.show();

	cout << endl;
	WineInh holding2(lab, yrs);
	holding2.getBottles();
	holding2.show();

	constexpr int kYears = 3;
	int y[kYears] = { 1993, 1995, 1998 };
	int b[kYears] = { 48, 60, 72 };

	cout << endl;
	WineComp more1("Chianti 1", kYears, y, b);
	more1.show();
	cout << "Total bottles for " << more1.label() << ": " << more1.sum() << endl;

	cout << endl;
	WineInh more2("Chianti 2", kYears, y, b);
	more2.show();
	cout << "Total bottles for " << more2.label() << ": " << more2.sum() << endl;

	return 0;
}