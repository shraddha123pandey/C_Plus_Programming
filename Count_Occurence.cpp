// 3.) C++ program to count occurrences elements in the array
#include<bits/stdc++.h>
using namespace std;
// Returns number of times x occurs in arr[0..n-1]
int countOccurrences(int arr[], int n, int x)
{
    int res = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          res++;
    return res;
}
// Driver Code
int main()
{ 
    int size;
  	cout<<"Enter the size of the array: ";
  	cin>>size;
	cout<<"Please enter the "<<size<<" elements"<<endl;
	int arr[size];
  	for (int i=0; i<size; i++)
  	{
  		cout<<"Enter element for arr["<<i<<"]: ";
  		cin>>arr[i];
	}
    int num;
  	cout<<"Please enter an element you want to search: ";
    cin>>num; 
    // Function 
    cout << "The Number of  occurence elements are:"<<countOccurrences(arr, size - 1, num);
    return 0;
}
// Name- Shraddha Pandey (20MEI10029)
