#include "Vehicle.h";
#include "Car.h";
#include <iostream>
#include <string>

using namespace std;

int main() {





	cout << endl << endl;
	system("pause");
	return 0;
}

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

void Car::displayInfo() {

}
