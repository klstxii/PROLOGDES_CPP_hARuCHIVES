#include <iostream>
using namespace std;

int main() {	
	int x, t=1;
   
	cout << "Enter desired rows: ";
    cin >> x;
    cout << "\n";
    
   	int y = x - 1;
   	
   	for(int i=1; i<=x; i++) {
        for(int k=y; k>=1; k--) {
            cout << " ";
        }
        
	for(int j=1;j<=i;j++)
	cout << t++ << " ";
	cout << "\n";
    y--;
   }
}
