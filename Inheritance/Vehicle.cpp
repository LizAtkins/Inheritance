#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

int main() {



	cout << endl << endl;
	system("pause");
	return 0;
}

Vehicle:: Vehicle() {
	manufacturer = " ";
	year = 0;
}
string Vehicle:: getManufacturer() {
	return manufacturer;
}
void Vehicle:: setManufacturer(string m) {
	manufacturer = m;
}
int Vehicle:: getYear() {
	return year;
}
void Vehicle:: setYear(int y) {
	year = y;
}
void Vehicle::displayInfo() {
	cout << "\nManufacturer:" << manufacturer;
	cout << "\nYear Built:" << year;
}