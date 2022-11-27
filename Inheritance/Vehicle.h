#pragma once
#ifndef VEHICLE_H 
#define VEHICLE_H

class Vehicle {
private:
	string manufacturer;
	int year;

public:
	Vehicle() {
		manufacturer = " ";
		year = 0;
	}
	string getManufacturer() {
		return manufacturer;
	}
	void setManufacturer(string m)  {
		manufacturer = m;
	}
	int getYear() {
		return year;
	}
	void setYear(int y) {
		year = y;
	}
};






#endif
