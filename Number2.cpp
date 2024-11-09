#include <iostream>
using namespace std;

int main() {
	
	double length;
	double width;
	
	cout << "Rectangle Area and Perimeter Calculator\n\n";
	cout << "Please enter the value of length: ";
	cin >> length;
	cout << "Please enter the value of width: "; 
	cin >> width;
	
	cout << "\n";
	// area of rectangle = length * width
	cout << "The area of the rectangle: " << length * width << "\n";
	// perimeter of rectangle = (2 * length) + (2 * width)
	cout << "The perimeter of the rectangle: " << (2*length) + (2*width);
}
