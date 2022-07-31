// write a program to implement insertion sort in c++ language
#include<iostream>
using namespace std;
int insert(int arr[],int n){
	int i,j, temp;
	for(i=1;i<n;i++){
		temp = arr[i];
		j=i-1;
		while(j>=0 && temp<=arr[j]){
			arr[j+1]=arr[j];
			j= j-1;
		}
		arr[j+1]= temp;
	}
}
int printArr(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int arr[]= {8,16,3,10,19,4,12,5,12,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before sorting array elements are"<<endl;
	printArr(arr, n);
	insert(arr,n);
	cout<<"After sorting array elements are-"<<endl;
	printArr(arr,n);
}
// Name- Shraddha Pandey -20MEI10029
