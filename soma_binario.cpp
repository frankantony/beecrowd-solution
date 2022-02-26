// C++ program to add two binary strings
#include<bits/stdc++.h>
using namespace std;

// This function adds two binary strings and return
// result as a third string
string addBinary(string a, string b)
{
	string result = ""; // Initialize result
	int s = 0;		 // Initialize digit sum

	// Traverse both strings starting from last
	// characters
	int i = a.size() - 1, j = b.size() - 1;
	while (i >= 0 || j >= 0 || s == 1)
	{
		// Comput sum of last digits and carry
		s += ((i >= 0)? a[i] - '0': 0);
		s += ((j >= 0)? b[j] - '0': 0);

		// If current digit sum is 1 or 3, add 1 to result
		result = char(s % 2 + '0') + result;

		// Compute carry
		s /= 2;

		// Move to next digits
		i--; j--;
	}
	return result;
}

// Driver program
int main()
{
	unsigned long long z = 10000000000000000;
	printf("%llu\n", z);
	string a = "1101101010101010101010101100101100101010010101010101010101010101010110", b="100";
	cout << addBinary(a, b) << endl;
	return 0;
}

