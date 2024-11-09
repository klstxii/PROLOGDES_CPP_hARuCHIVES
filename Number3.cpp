#include <iostream>
using namespace std;

/* Imagine you want a program that tells a user how many stamps they need in order to mail a certain number of pages.

- You need one stamp for every 5 pages
- 6 pages = 2 stamps
- 12 pages = 3 stamps
- ...

Write a program which will allow users to enter a certain number of pages and output how many stamps they would need.*/

int main() {
	
	int pages;
	int stamps;
	
	cout << "Stamps Indicator\n\n";
	cout << "Please enter the number of pages: ";
	cin >> pages;
	cout << "\n";
	
	// To identify the number os stamps needed, use the formula, pages/5
	stamps = pages / 5;
	if (pages == 5) {
		cout << "You will need " << stamps << " " << "stamp.";
	}
	else if(pages == 6) {
		stamps ++;
		cout << "You will need " << stamps << " " << "stamps.";
	}
	else {
		stamps ++;
		cout << "You will need " << stamps << " " << "stamps.";
	}
	
	return 0;
		
	
}
