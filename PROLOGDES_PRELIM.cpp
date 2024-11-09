#include <iostream>
using namespace std;

int main() {
	
	int firstNum = 12;
	int secondNum = 25;
	int thirdNum = 52;
	
	cout << "FIND THE LARGEST NUMBER\n\n";
	
	cout << "1st number: " << firstNum << "\n";
	cout << "2nd number: " << secondNum << "\n";
	cout << "3rd number: " << thirdNum << "\n\n";
	
	if((firstNum > secondNum) && (firstNum > thirdNum)) {
		
		cout << "Largest Number: " << firstNum;
		cout << "\nThe first number is the largest number.";
		
	}
	else if((secondNum > firstNum) && (secondNum > thirdNum)) {
		
		cout << "Largest Number: " << secondNum;
		cout << "\nThe second number is the largest number.";
		
	} 
	else {
		cout << "Largest Number: " << thirdNum;
		cout << "\nThe third number is the largest number.";
		
	}
	
	return 0;
}
