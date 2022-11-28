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
void Truck:: displayTruckInfo() {
	cout << "\nTowing Capacity: " << towingCapacity;
}
