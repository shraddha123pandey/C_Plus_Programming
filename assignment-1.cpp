#include<bits/stdc++.h>
using namespace std;

// Assignment Question-2
//Find the largest the list
//Input: {6, 5, 7, 4, 2, 3, 1 }
//Output: 9

int greatest(int arr[], int n)
{
	
	int max= arr[0];
	for(int i=1; i<n; i++)
	
	
		if (arr[i]>max)
		
			max=arr[i];
		
	
	return max;
}


//Find the smallestelementof the list
//Input: {6, 5, 7, 4, 2, 3, 1 }
//Output: 2
int smallest(int arr[], int n)
{
	
	int min= arr[0];
	for(int i=1; i<n; i++)
	
	
		if (arr[i]<min)
		
			min=arr[i];
		
	
	return min;
}
// Assignment Question-3
//Find the 2ndsmallestelementof the list
//Input: {6, 5, 7, 4, 2, 3, 1 }
//Output: 3

int print2Smallest(int arr[], int size)
{
	int i, first, second;	
	if (size < 2)
	{
		cout<<" Invalid Input ";
	}

	first = second = INT_MAX;
	for (i = 0; i < size ; i ++)
	{
		
		if (arr[i] < first)
		{
			second = first;
			first = arr[i];
		}

		else if (arr[i] < second && arr[i] != first){
			second = arr[i];
        }
	}
	if (second == INT_MAX){
		cout << "There is no second smallest element\n";
    }
	else{
		cout <<  " second Smallest element is ->" << second << endl;
    }
}
// Assignnment Question-4
//Find all the elements in the array that are greater than all elements to their right.
//Input: {6, 5, 7, 4, 2, 3, 1 }
//Output: 7,4,3,1

int find(int arr[], int n)
{
    stack<int> s;

    int max_so_far = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= max_so_far)
        {
            max_so_far = arr[i];
            s.push(arr[i]);
        }
    }
    cout<<endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

// Assignment Question -5
//Find the minimum number of parentheses to make string valid
int minAddToMakeValid(string s)
{
    stack<char> st;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.empty())
            {
                count++;
                continue;
            }

            else if (s[i] == ')' && st.top() != '(')
                count++;

            st.pop();
        }
    }

    count += st.size();

    return count;
}


int main()
{
	int arr[]=  {6, 5, 7, 4, 2, 3, 1 };
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<< "THe smallest element of the array is-> "<<smallest(arr, n)<<endl;
	cout<<"-----------------------"<<endl;
	cout<< "THe greatest element of the list is ->"<<greatest(arr, n)<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"element that is Second greatest element in the array:"<<endl;
	print2Smallest(arr, n);
	cout<<"-----------------------"<<endl;
	cout<<"All elements in an array that is greater than all elements to their right->"<<endl;
	
	find(arr, n);
	cout<<"-----------------------"<<endl;
	string s;
    cout << "Enter the parenthesis string\n";
    cin >> s;

    cout << "Minimum brackets to add: " << minAddToMakeValid(s) << endl;
    cout<<"-----------------------"<<endl;
   
	return 0;
}


