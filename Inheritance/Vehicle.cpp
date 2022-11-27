#include "Vehicle.h";
#include <iostream>
#include <string>

using namespace std;

int main() {





	cout << endl << endl;
	system("pause");
	return 0;
}

Vehicle:: Vehicle() {
	manufacturer = " ";
	year = 0;
}
string Vehicle:: getManufacturer() {
	return manufacturer;
}
void Vehicle:: setManufacturer(string m) {
	manufacturer = m;
}
int Vehicle:: getYear() {
	return year;
}
void Vehicle:: setYear(int y) {
	year = y;
}