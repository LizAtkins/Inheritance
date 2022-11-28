#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;


Vehicle::Vehicle(string m, int y) {
		manufacturer = m;
		year = y;
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
void Vehicle::displayInfo () {
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear Built: " << year;
}