/* Question No. 6-
* This C++ program tells if there exists a pair in array whose sum results in x.
*/
#include <iostream>
using namespace std;
// Function to find and print pair
bool checkPairValue(int A[], int size, int x) {
	for (int i = 0; i < (size); i++) {
		for (int j = (i + 1); j < size; j++) {
			if (A[i] + A[j] == x) {
				cout << "Pair with a given sum " << x << " is =  (" << i+1 << ", " << j+1 << ")"<< endl; // because array start with 0 that's why we added 1
				
				return 1;
			}
		}
	}
	return 0;
}
int main() {
	int A[] = {2,7, 5, 1};
	int x = 8;
	int size = sizeof(A) / sizeof(A[0]);
	
	if (checkPairValue(A, size, x)) {
		cout << " "<< endl;
	}
	else {
		cout << "IMPOSSIBLE" << x << endl;
	}
	
	return 0;
}
// Name- Shraddha Pandey (20MEI10029)
