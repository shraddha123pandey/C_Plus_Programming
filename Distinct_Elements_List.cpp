// 4.) C++ program to calculate the number of distinct elements present in the list
// list::unique
#include <iostream>
#include <cmath>
#include <list>
using namespace std;
int main ()
{
   int N;
  	cout<<"Enter the size of the array: ";
  	cin>>N;
	cout<<"Please enter the "<<N<<" elements"<<endl;
	int  Distinct[N];
  	for (int i=0; i<N; i++)
  	{
  		cout<<"Enter element for arr["<<i<<"]: ";
  		cin>> Distinct[i];
	}
// Distinct[] = {2,3,2,2,3}
  list<int> mylist ( Distinct, Distinct+N); 
  mylist.sort();            
  mylist.unique();  
  mylist.size();       
  cout << "mylist contains:";
  for (list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
    cout << " " << *it;
  cout << '\n';
  cout<<"The Number of Distinct elements in the list is->"<<mylist.size()<<endl;       
  return 0;
}

// Name- Shraddha Pandey (20MEI10029)
