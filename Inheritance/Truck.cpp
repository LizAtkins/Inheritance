#include <iostream>
#include <string>
#include "Truck.h"

using namespace std;

Truck:: Truck() {
	towingCapacity = 0;
}
double Truck:: getTowingCapacity() {
	return towingCapacity;
}
void Truck:: setTowingCapacity(double t) {
	towingCapacity = t;

}
void Truck:: displayInfo() {
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear Built: " << year;
	cout << "\nTowing Capacity: " << towingCapacity;
}
