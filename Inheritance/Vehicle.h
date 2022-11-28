#pragma once
#ifndef VEHICLE_H 
#define VEHICLE_H
using namespace std;
class Vehicle {
protected:
	string manufacturer;
	int year;

public:
	Vehicle(string m, int y);
	string getManufacturer();
	void setManufacturer(string m);
	int getYear();
	void setYear(int y);
	void displayInfo();
};


#endif
