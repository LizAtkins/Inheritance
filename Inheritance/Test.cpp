#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"

using namespace std;


int main() {
	string tempMan;
	int tempYear;
	int tempDoors;

	Vehicle test;
	Car car;

	cout << "\nVehicle Program";
	cout << endl << endl;
	cout << "Vehicle:";
	cout << "\nEnter the manufacturer:";
	cin >> tempMan;
	test.setManufacturer(tempMan);
	cout << "Year built: ";
	cin >> tempYear;
	test.setYear(tempYear);
	test.displayInfo();

	cout << "\nCar:";
	cout << "\nEnter the manufacturer: ";
	cin >> tempMan;
	car.setManufacturer(tempMan);
	cout << "Year built: ";
	cin >> tempYear;
	car.setYear(tempYear);
	cout << "Number of doors:";
	cin >> tempDoors;
	car.setDoors(tempDoors);
	car.displayInfo();
	car.displayCarInfo();
	


	cout << endl << endl;
	system("pause");
	return 0;
}