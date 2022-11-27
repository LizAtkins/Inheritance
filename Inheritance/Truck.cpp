#include "Vehicle.h";
#include "Truck.h";
#include <iostream>
#include <string>

using namespace std;

int main()
{




	cout << endl << endl;
	system("pause");
	return 0;
}

Truck:: Truck() {
	towingCapacity = 0;
}
double Truck:: getTowingCapacity() {
	return towingCapacity;
}
void Truck:: setTowingCapacity(double t) {
	towingCapacity = t;

}
