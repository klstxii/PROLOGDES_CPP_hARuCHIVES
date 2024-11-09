#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cmath>

#include <iostream>
using namespace std;

void areaPerimeter() {
	
	string shape;
	int rectangle;
	int triangle;
	
	double length;
	double width;
	double base;
	double height;
	double firstSide;
	double secondSide;
	
	cout << "Please choose a shape (rectangle(r) or triangle(t)?): ";
	cin >> shape;
	
	if(shape == "rectangle" || shape == "r") {
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
	} else if(shape == "triangle" || shape == "t") {
		cout << "Triangle Area and Perimeter Calculator\n\n";
		cout << "Please enter the base: ";
		cin >> base;
		cout << "Please enter the height: ";
		cin >> height;
		cout << "Please enter the 1st side: ";
		cin >> firstSide;
		cout << "Please enter the 2nd side: ";
		cin >> secondSide;		
		
		cout << "\n";
		// area of a triangle = 1/2 or 0.5 * base * height
		cout << "The area of the triangle: " << 0.5 * base * height << "\n";
		// perimeter of a triangle = a + b + c
		cout << "The perimeter of the triangle: ";
		if(firstSide == height) {
			cout << height + base + secondSide;
		}
		else if(secondSide == height) {
			cout << firstSide + base + height;
		} else {
		cout << firstSide + secondSide + base;
	}
		
	}

}


void areaCircumference() {
	
	double radius;
	
	cout << "Circle Area and Circumference Calculator\n\n";
	cout << "Please enter the value of the radius: ";
	cin >> radius;
	
	cout << "\n";
	//area of a circle = pi * radius^2
	cout << "The area of the circle: " << M_PI * pow(radius,2);
	//circumference = 2 * pi * radius
	cout << "\nThe circumference: " << 2 * M_PI * radius;
}


void frhCel() {
	
	float frh, cel;
	
	cout << "Convert temperature in Fahrenheit to Celcius \n";	
    cout << "\nInput the temperature in Fahrenheit: ";
    cin >> frh;
    
    cel = (frh - 32) * 5/9;
    cout << "\nThe temperature in Fahrenheit    : " << frh << endl;
    cout << "The temperature in Celcius : " << cel << endl;
	cout << endl;
}


void celFrh() {
	
	float frh, cel;
	
	cout << "Convert temperature in Celsius to Fahrenheit \n";	
    cout << "Input the temperature in Celsius: ";
    cin >> cel;
    
    frh = (cel * 9.0) / 5.0 + 32;
    cout << "The temperature in Celsius    : " << cel << endl;
    cout << "The temperature in Fahrenheit : " << frh << endl;
	cout << endl;
}


int main() {
	
	int choice;
	char again;
	
	do {
		cout << "Which program would you like to use?\n\n";
		cout << "1. Find Area and Perimeter\n";
		cout << "2. Find Area and circumference\n";
		cout << "3. Convert Fahrenheit to Centigrade\n";
		cout << "4. Convert Centigrade to Fahrenheit\n";
		cout << "5. Exit";
	
		cout << "\n\nEnter desired function: ";
		cin >> choice;
		cout << endl; 
	
		if(choice == 1) {
			areaPerimeter();
		} else if(choice == 2) {
			areaCircumference();
		} else if(choice == 3) {
			frhCel();
		} else if(choice == 4) {
			celFrh();
		} else {
			return 0;
		}
		
		cout << "\n\nDo you want to use again (y/n)? ";
		cin >> again;
		cout << "\n\n";
			
	} while (again == 'y');
	
	return 0;
	
}
