// CPP program to find the first occurence element in the array
#include <iostream>
using namespace std;
int firstOccurence(int arr[], int idx, int num)
{   
    // Traversing the array from
    // last position
    for (int i = 0; i <= idx; i++) {
        if (arr[i] == num)
            return i;
    }
    return -1;
}
int lastOccurence(int arr[], int idx, int num)
{
     
    // Traversing the array from
    // last position
    for (int i = idx; i >= 0; i--) {
        if (arr[i] == num)
            return i;
    }
    return -1;
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
    // Function call
    cout << "The first occurence element is:"<<firstOccurence(arr, size - 1, num)<<endl;
    cout << "The Last occurence element is:"<<lastOccurence(arr, size - 1, num)<<endl;
    return 0;
}

// Name- Shraddha Pandey (20MEI10029)
