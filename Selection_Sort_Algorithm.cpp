// the Selection sort algorithm  sorts an  array by repeatedly finding the minimum element(considerinng ascendding order) 
// usoorted part annd putting  iit at the begining . The algorithm maintains  two
//subarrays iin aa given array.
// 1.) the  subbarray which is already sorted 
//2.) remaining subarray which is unsorted
// C++ program for implementation if selection sort 
# include<iostream>
using namespace std;
int swap(int *xp, int *yp){
	int temp = *xp;
	*xp= *yp;
	*yp = temp;
}
int selectionSort(int arr[],int n){
	int i, j, mid_idx;
	// One by one  move  boundary of unsorted subarray
	for(i=0; i<n-1; i++){
		mid_idx=i;
		for(j=i+1; j<n; j++){
		
			if(arr[j]<arr[mid_idx]){
			mid_idx=j;
		
		}
		// Swap the found minimum element with the first element
		swap(&arr[mid_idx], &arr[i]);
}
}
}
/* Function to print array
*/

int printArray(int arr[],int size){
	int i;
	for(i=0; i<size;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
	
}
// drive the program to test the above program

int main(){
	int arr[]= {8,16,3,10,19,4,12,5,12,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before sorting array elements are"<<endl;
	printArray(arr,n);
	selectionSort(arr,n);
	cout<<"After sorting array elements are-"<<endl;
	printArray(arr,n);
	
	return 0;
}
// Name-Shraddha Pandey -20MEI10029


