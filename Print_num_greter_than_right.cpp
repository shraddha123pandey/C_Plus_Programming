#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <stack>
using namespace std;
// Function to print all elements which are greater than all
// elements present to their right
int find(vector<int> const &arr)
{
  // create an empty stack
    stack<int> s;
    // do for each element
    for (int i: arr)
    {
        // pop all the elements that are less than the current element
        while (!s.empty() && s.top() < i) {
            s.pop();
        }
        // push current element into the stack

        s.push(i);

    }
    // print all elements in the stack
    while (!s.empty())
    {
        cout << s.top() << " ";
   	    s.pop();
    }
}
int main()
{
    vector<int> arr = { 10, 4, 6, 3, 5 };
    find(arr);
    return 0;
}
