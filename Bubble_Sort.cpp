// Bubble_Sort Algorithm
#include <iostream>
using namespace std;
int swap(int *xp, int *yp){
	int temp = *xp;
	*xp= *yp;
	*yp = temp;
}
int bubble_sort(int arr[], int n){
	for(int i=0; i<n-1;i++){
		int flag=0;
		for( int j =0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			flag==1;
		}
		
		}if(flag==0){
			break;
		}
	}
}
int printArray(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
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
	bubble_sort(arr,size);
	printArray(arr,size);
	
}

// Name -Shraddha Pandey -20MEI10029
