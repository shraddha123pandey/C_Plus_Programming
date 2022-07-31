// // C++ program to implement recursive Binary Search
// #include <iostream>
// using namespace std;
// // A recursive binary  search function. It returns location of x in given array is present otherwise return -1
// 
//int BinarySearch(int arr[],int l, int r, int x){
// 	if(r>=l){
// 		int mid = (l+(r-l))/2;
// 		// If the element is present at the middle itself
// 		if(arr[mid]==x){
// 			return mid;
//		 }
//		 // If element is smaller than mid,then it can only be present in left subarray
//		 else if(arr[mid]>x){
//		 	return BinarySearch(arr,l,mid-1,x);
//		 	
//		 	
//		 }else{
//		 	return BinarySearch(arr,mid+1,r,x);
//		 	
//		 }
// 		
//	 }
//	 // We reach here when element is not present in array
//	 return -1;
//	 
// }
//int main(){
//	int arr[]= {2,3,4,5,6,7,8,9};
//	int x= 9;
//	int n = sizeof(arr)/sizeof(arr[0]);
//	int result = BinarySearch(arr,0,n-1,x);
//	if(result==-1){
//		cout<<"The element is not present in the array"<<endl;
//		
//}	else{
//			cout<<"The element is present is present in the array"<<result<<endl;
//	}
//	return 0;
//} 
//
//
//
//







// Sequential Search Algorithm

# include <iostream>
using namespace std;
int search(int arr[],int n, int x){
	int i;
	for(i= 0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}
//

int main(){
	int arr[]= {2,4,5,6,7,8,9};
	int x= 10;
	int n = sizeof(arr)/sizeof(arr[0]);
	// Function Call
	int result = search(arr,n,x);
	if(result==-1){
		cout<<"The number is not present in the array."<<endl;
	}else{
		cout<<"The number is present in the array->"<<result<<endl;
		
	}
	return 0;
	
}



 
 



