#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;
Vehicle test;

int main() {
	string tempMan;
	int tempYear;

	cout << "\nVehicle Program";
	cout << endl << endl;
	cout << "Vehicle:";
	cout << "\nEnter the manufacturer:";
	cin >> tempMan;
	test.setManufacturer(tempMan);
	cout << "\nYear built: ";
	cin >> tempYear;
	test.setYear(tempYear);

	test.displayInfo();


	cout << endl << endl;
	system("pause");
	return 0;
}