# include <iostream>
using namespace std;
// merge function
void merge(int arr[], int l, int m, int r){
	int i= l; // straring index for the left subarray
	int j=m+1;// strarting index for the right subarray
	int k=l;//starting index for the temp array
	int temp[5];// temperary
	while(i<=m&&j<=r){
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];// arr[i] is smaller than arr[j]
			i++;
			k++;
		}else{
		temp[k]=arr[j];// arr[j] is smaller than arr[i]
			j++;
			k++;
	}
}
	while(i<=m){
		temp[k]=arr[i];// coping all elements from left subarray to temp as it is
			i++;
			k++;
		
	}
		while(j<=r){
		temp[k]=arr[j];// coping all elements from right subarray to temp as it is
			j++;
			k++;
		
	}
	for(int s=l; s<=r;s++){
		arr[s]=temp[s];
	}
}

// merge sort sorting algorithm
void mergeSort(int arr[], int l, int r){
	if(l<r){
		int m= (l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}



int main(){
//	int arr[5]={4,3,6,1,8};
	int size;
	cout<<"Enter size of  the array:"<<endl;
	cin>>size;
	cout<<"Enter"<<size<<"number of elements of the array:"<<endl;
	int myarr[size];
	for(int i=0; i<size;i++){
		cin>>myarr[i];
	}
	cout<<"Before the merge Sort:"<<endl;
	for(int i=0; i<size;i++){
		cout<<myarr[i]<<" "<<endl;
	}
	// mergesort function
	mergeSort(myarr,0,size-1);
	cout<<"After the merge Sort:"<<endl;
	for(int i=0; i<size;i++){
		cout<<myarr[i]<<" "<<endl;
	}
	return 0;
}
