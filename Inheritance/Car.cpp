#include <iostream>
#include <string>
#include "Car.h"

using namespace std;


int Car:: getDoors() {
	return doors;
}
void Car:: setDoors(int d) {
	doors = d;
}

 void Car::displayInfo() {
	cout << "\nManufacturer: " << manufacturer;
	cout << "\nYear Built: " << year;
	cout << "\nDoors: " << doors;
}
