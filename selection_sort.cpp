#include<iostream>
using namespace std;

int minimum(int a[],int n, int k)
{
	int loc;
    int min=a[k];
    for(int i=k;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            loc=i;
        }
    }
    return loc;
}
int selection(int a[],int n)
{
    int loc,i;
    for(i=0;i<n-1;i++)
    {
        loc=minimum(a,n,i);
        
		int temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"\nThe sorted list is: "<<endl;
    for(i=0;i<n;i++)
       cout<<a[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n],i;
    cout<<"Enter the array values:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter element- "<<i+1<<": ";
		cin>>a[i];
    }
    //calling selection function
    selection(a,n);
    return 0;
}

