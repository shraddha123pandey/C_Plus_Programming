// Solution No-5
#include<iostream>
#include<vector>
using namespace std;

void RemoveEverySecondChilderen(vector <int>arr, int N)
{
    int k=1;
    if(arr.size()==1)
    {  
        cout<<arr[0];
        return;
    }else{
	
    N=((N+k)%arr.size());
   
    cout<<arr[N]<<"-> ";
    arr.erase(arr.begin()+N);
    RemoveEverySecondChilderen(arr,N);
    cout<<endl;
    
}
}
int main()
{
    int N,k,result=0;
    cout<<"enter the size of array :";
    cin>>N;
    vector<int> arr;
    cout<<"Enter the values:"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"enter the value of arr["<<i<<"] : ";
        cin>>k;
        arr.push_back(k);
    }
   RemoveEverySecondChilderen(arr,result);
   
    return 0;
}

// Name-Shraddha Pandey (20MEI10029)
