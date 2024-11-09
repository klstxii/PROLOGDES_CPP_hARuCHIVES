#include <iostream>
using namespace std;

int main() {
	
	int input[500], output[500], count = 10, i;
 
	 cout << "Enter " << count << " numbers \n\n";
 
 	for(i = 0; i < count; i++){
 		cout << "Enter number: ";
 		cin >> input[i];
 	}	
 
 	for(i = 0; i < count; i++){
 		output[i] = input[count-i-1];
 	} 
 	
 	cout << "\nStored numbers in Array:\n";
 	
 	size_t n = sizeof(input)/sizeof(input[500]);
 	for (size_t i = 0; i < 10; i++) {
        cout << input[i] << ' ';
    }
 	
 	cout << "\n\nReversed Array:\n";
 	for(i = 0; i < count; i++){
 		cout << output[i] << " ";
 		}
 
	return 0;
} 

