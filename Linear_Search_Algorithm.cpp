#include<iostream>
using namespace std;

void linearSearch(int a[], int n, int key) 
{
  int i;
  for (i=0; i<n; i++) 
    if (a[i] == key) 
	{
      cout<<key<<" found at index no. "<<i<<endl;
      break;
    }

  if (i==n)
    cout<<key<<" is not found"<<endl;
}

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
  	cout<<"Please enter an element you want to search: "<<endl;
    cin>>num;
	linearSearch(arr, size, num);
	return 0;
}

