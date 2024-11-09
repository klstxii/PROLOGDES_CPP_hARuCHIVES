#include <iostream>
using namespace std;

int main() {
	int drink, amount;
	char again;
	
	do
	{
	cout << "It's a VENDING MACHINE.\n" << "Which drink would you like?\n\n";
	cout << "1. Fresh Water - Php17\n";
	cout << "2. Soda Pop - Php25\n";
	cout << "3. Lemonade - Php32\n";
	cout << "4. Coffee - Php23\n";
	cout << "5. Cancel\n\n";
	cout << "Your drink: ";
	cin >> drink;
	
	if(drink == 1) {
		cout << "Fresh Water is Php17, how much is your money? ";
		cin >> amount;
		
		if (amount > 17) {
			cout << "\nFresh Water has been issued.";
			amount-=17;
			cout << "\nYou're change is Php" << amount << "\n";
			while (amount > 10) {
				amount-=10;
				cout << "Php10 coin issued\n";
			}
			while (amount >= 5) {
				amount-=5;
				cout << "Php5 coin issued\n"; 
			}
			while (amount > 0) {
				amount-=1;
				cout << "Php1 coin issued\n";
			}
		}
		else {
			cout << "\nFresh Water has been issued.\n\n";
		}
	}
	else if (drink == 2) {
		cout << "Soda Pop is Php25, how much is your money? ";
		cin >> amount;
		
		if (amount > 25) {
			cout << "\nSoda Pop has been issued.";
			amount-=25;
			cout << "\nYou're change is Php" << amount << "\n";
			while (amount > 10) {
				amount-=10;
				cout << "Php10 coin issued\n";
			}
			while (amount >= 5) {
				amount-=5;
				cout << "Php5 coin issued\n"; 
			}
			while (amount > 0) {
				amount-=1;
				cout << "Php1 coin issued\n";
			}
		}
		else {
			cout << "\nSoda Pop has been issued.\n\n";
		}
	}
	else if (drink == 3) {
		cout << "Lemonade is Php32, how much is your money? ";
		cin >> amount;
		
		if (amount > 32) {
			cout << "\nLemonade has been issued.";
			amount-=32;
			cout << "\nYou're change is Php" << amount << "\n";
			while (amount > 10) {
				amount-=10;
				cout << "Php10 coin issued\n";
			}
			while (amount >= 5) {
				amount-=5;
				cout << "Php5 coin issued\n"; 
			}
			while (amount > 0) {
				amount-=1;
				cout << "Php1 coin issued\n";
			}
		}
		else {
			cout << "\nLemonade has been issued.\n\n";
		}
	}
	else if (drink == 4) {
		cout << "Coffee is Php23, how much is your money? ";
		cin >> amount;
		
		if (amount > 23) {
			cout << "\nCoffee has been issued.";
			amount-=23;
			cout << "\nYou're change is Php" << amount << "\n";
			while (amount > 10) {
				amount-=10;
				cout << "Php10 coin issued\n";
			}
			while (amount >= 5) {
				amount-=5;
				cout << "Php5 coin issued\n"; 
			}
			while (amount > 0) {
				amount-=1;
				cout << "Php1 coin issued\n";
			}
		}
		else {
			cout << "\nCoffee has been issued.\n\n";
		}
	}
	else if (drink == 5) {
		return 0;
	}
	
	cout << "\nDo you want to order again (y/n)? ";
	cin >> again;
	cout << "\n\n";
	} while (again == 'y');
	
	return 0;
}
