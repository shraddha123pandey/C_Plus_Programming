#include <iostream>
using namespace std;
int main()
{
int password;
cout << "Enter a password to bruteforce.. : ";
cin >> password;
for (int i = 0; i < 999999; i++) {
if (i == password) {
cout << "The brute-forced password is = " << i << endl;
break;
}
cout << "Loading..[" << i << "]\n";
}
return 0;
}










#include <iostream>
#include <string>

// Create some alphabet tables

const char AlphabetUpper[26] =
{
	'A', 'B', 'C', 'D', 'E', 'F', 'G',
	'H', 'I', 'J', 'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R', 'S', 'T', 'U',
	'V', 'W', 'X', 'Y', 'Z'
};

const char AlphabetLower[26] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z'
};

// Recursive function, keeps clocking characters
// until length is reached

void Generate(unsigned int length, std::string s)
{
	if(length == 0) // when length has been reached
	{
		std::cout << s << "\n"; // print it out
		return;
	}

	for(unsigned int i = 0; i < 26; i++) // iterate through alphabet
	{
		// Create new string with next character
		// Call generate again until string has reached it's length
		std::string appended = s + AlphabetLower[i];
		Generate(length-1, appended);
	}
}

void Crack()
{
	while(1)
	{
		// Keep growing till I get it right
		static unsigned int stringlength = 1;
		Generate(stringlength, "");
		stringlength++;
	}
}

int main()
{
	std::cerr << "Attempting to crack...";
	Crack();
	return 0;
}




