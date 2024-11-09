#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
	
	double radius;
	
	cout << "Sphere's Volume Calculator\n\n";
	cout << "Please enter the value of radius: ";
	cin >> radius;
	
	// volume of a sphere = 4/3 "pi" r^3 
	cout << "\n\n";
	cout << "The volume is: " << 1.333333333 * M_PI * pow(radius, 3);
	return 0;
}
