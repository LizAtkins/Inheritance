#pragma once
#ifndef VEHICLE_H 
#define VEHICLE_H
using namespace std;
class Vehicle {
private:
	string manufacturer;
	int year;

public:
	Vehicle();
	string getManufacturer();
	void setManufacturer(string m);
	int getYear();
	void setYear(int y);
	void displayInfo();
};


#endif
