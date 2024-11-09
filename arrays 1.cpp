#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double average(int arr[], int n) {
	
	double count=0, sum=0; 
	int i;
	double min=INT_MAX;
	double max=INT_MIN;
	for(i=0; i<n; i++){
		if(arr[i]>max){
			max = arr [i];
		}	
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	for (i=0; i<n; i++){
		if(arr[i]!=max && arr[i]!=min){
		sum=sum+arr[i];
		count++;
		}
	}	
	if(count==0)
	return 0;
	else
	return sum/count;

}

int main() {
	
	int n;
    cout << "Enter the numbers of data: ";
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++) {
    	cout << "Enter number: ";
    	cin >> arr[i];
	}
	
	cout << "\nEntered Numbers in an Array:\n";
	size_t z = sizeof(arr)/sizeof(arr[z]);
 	for (size_t i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    
    cout << "\n\nComputed Average Value Excluding the Largest and Smallest values: " << average(arr,n) << "\n";
    
    for(int s = 1;s < n; ++s) {

    if(arr[0] > arr[s])
      arr[0] = arr[s];
  	}

  	cout << endl << "\nSmallest Number = " << arr[0];
    
    for(int l = 1;l < n; ++l) {

    if(arr[0] < arr[l])
      arr[0] = arr[l];
  	}

  	cout << endl << "Largest Number = " << arr[0];
  	
    return 0;
    
}
