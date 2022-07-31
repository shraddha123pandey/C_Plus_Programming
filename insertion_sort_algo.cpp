//Insertion Sort

#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
  int i, j, key;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main()
{
  int n;
  cout << "Enter Size of the Array: ";
  cin >> n;
  int arr[n], i;
  cout << "Enter values of the array"<<endl;
  for(i = 0; i < n; i++)
	{
		cout<<"Enter element- "<<i+1<<": ";
		cin>>arr[i];
	}
  insertionSort(arr, n);

  cout << "Array after Insertion Sort is: "<<endl;
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}
