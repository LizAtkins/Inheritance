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

	cout << "\nVehicle Program";
	cout << endl << endl;
	cout << "Vehicle:";
	cout << "\nEnter the manufacturer: ";
	getline(cin, tempMan);
	cout << "Year built: ";
	cin >> tempYear;
	Vehicle test(tempMan, tempYear);
	test.displayInfo();

	cout << "\n\nCar:";
	cout << "\nEnter the manufacturer: ";
	cin.ignore();
	getline(cin, tempMan);;
	cout << "Year built: ";
	cin >> tempYear;
	cout << "Number of doors: ";
	cin >> tempDoors;
	Car car(tempDoors, tempMan, tempYear);
	car.displayInfo();

	cout << "\n\nTruck:";
	cout << "\nEnter the manufacturer: ";
	cin.ignore();
	getline(cin, tempMan);
	cout << "Year built: ";
	cin >> tempYear;
	cout << "Towing capacity: ";
	cin >> tempTowing;
	Truck truck(tempTowing, tempMan, tempYear);
	truck.displayInfo();


	cout << endl << endl;
	system("pause");
	return 0;
}