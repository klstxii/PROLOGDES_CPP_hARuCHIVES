#include<iostream>
using namespace std;
int main()
{
    int row=3, col=3, i, j, arr[10][10];
    cout<<"Enter "<<row*col<<" Array Elements: (press enter to input another numbers)\n";
    
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
        	cin>>arr[i][j];
		}

    }
    
    cout<<"\n\nThe Array is:\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
    
    return 0;
}
