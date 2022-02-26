#include <bits/stdc++.h>

using namespace std;

int main()
{
	char first[] = { 'a', 'b', 'c', 'd', 'e' };
	char second[] = { 'd', 'e','z','y'};
//	char first[100],second[100];
//	cin >> first;
//	cin >> second;
	int n = sizeof(first) / sizeof(first[0]);

	vector<char> v2;
	vector<char>::iterator it, ls;

	sort(first, first + 5);
	sort(second, second + 5);

	// Print elements
	cout << "First array :";
	for (int i = 0; i < n; i++)
		cout << " " << first[i];
	cout << "\n";

	// Print elements
	cout << "Second array :";
	for (int i = 0; i < n; i++)
		cout << " " << second[i];
	cout << "\n\n";

	// using default comparison
	/* first array intersection second array */
	ls = set_difference(first, first + 5, second, second + 5, v2.begin());

	cout << "Using default comparison, \n";
/*	cout << "The difference has " << (ls - v2.begin()) << " elements :";
	for (it = v2.begin(); it < ls; ++it)
		cout << " " << *it;
	cout << "\n";
*/
	
	for (int i = 0;i < (ls - v2.begin());i++)	
		cout << v2[i] << "\n";
	return 0;
}

