
// C++ code to demostrate Divide and Conquer Algorithm
# include <iostream>
 using namespace std;
 // function to find the maximum no in the array
 int DAC_Max(int arr[], int index, int l){
 	int max;
 	if(index>l-2){
		if (arr[index]>arr[index+1]){
			return arr[index];
		 }
		 else{
		 	return arr[index+1];
		 } 		
	 }
	 max = DAC_Max(arr,index+1,1);
	 if(arr[index]>max){
	 	return arr[index];
	 }
	 else{
	 	return max;
	 }
 }
 
  // function to find the minimum no in the array
 int DAC_Min(int arr[], int index, int l){
 	int min;
 	if(index>l-2){
 		if (arr[index]<arr[index+1]){
 			return arr[index];
		 }
		 else{
		 	return arr[index+1];
		 }
 		
	 }
	 min= DAC_Min(arr,index+1,1);
	 if(arr[index]<min){
	 	return arr[index];
	 }
	 else{
	 	return min;
	 }
 }
 
 // Drive Code
int main()
{
	int arr[] = {120,34,56,43,58,11,90};
 	int n = sizeof(arr)/sizeof(arr[0]);
 	
 	int max,min;
 	max = DAC_Max(arr,0,n);
 	min= DAC_Min(arr,0,n);
 	cout<<"Maximum is::"<<max<<endl;
 	cout<<"Minimum is::"<<min<<endl;
 	return 0;
 		
 	
 };
 



