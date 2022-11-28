// Elizabeth Atkins
// CIS 1202 Programming Assignment #14

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;


int main() {
	string tempMan;
	int tempYear;
	int tempDoors;
	double tempTowing;

	Vehicle test;
	Car car;
	Truck truck;

	cout << "\nVehicle Program";
	cout << endl << endl;
	cout << "Vehicle:";
	cout << "\nEnter the manufacturer: ";
	cin >> tempMan;
	test.setManufacturer(tempMan);
	cout << "Year built: ";
	cin >> tempYear;
	test.setYear(tempYear);
	test.displayInfo();

	cout << "\n\nCar:";
	cout << "\nEnter the manufacturer: ";
	cin >> tempMan;
	car.setManufacturer(tempMan);
	cout << "Year built: ";
	cin >> tempYear;
	car.setYear(tempYear);
	cout << "Number of doors: ";
	cin >> tempDoors;
	car.setDoors(tempDoors);
	car.displayInfo();
	car.displayCarInfo();

	cout << "\n\nTruck:";
	cout << "\nEnter the manufacturer: ";
	cin >> tempMan;
	truck.setManufacturer(tempMan);
	cout << "Year built: ";
	cin >> tempYear;
	truck.setYear(tempYear);
	cout << "Towing capacity: ";
	cin >> tempTowing;
	truck.setTowingCapacity(tempTowing);
	truck.displayInfo();
	truck.displayTruckInfo();


	cout << endl << endl;
	system("pause");
	return 0;
}