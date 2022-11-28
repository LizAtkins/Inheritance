#include <iostream>
#include <string>
#include "Car.h"

using namespace std;


Car:: Car() {
	doors = 0;
}
Car::Car(int d) {
	doors = d;
}
int Car:: getDoors() {
	return doors;
}
void Car:: setDoors(int d) {
	doors = d;
}

void Car::displayCarInfo() {
	cout << "\nDoors: " << doors;
}
