#include <string>
#include<iostream>

using namespace std;

void solve (string input) {
	int len = input.length();
	for (int i = 0; i < len; i++) {
		char c = input[i];
		if (c >= '0' && c <= '9')
			cout << c;
		else if ((c >= 'a' && c <= 'c') || (c >= 'A' && c <= 'C'))
			cout << '2';
		else if ((c >= 'd' && c <= 'f') || (c >= 'D' && c <= 'F'))
			cout << '3';
		else if ((c >= 'g' && c <= 'i') || (c >= 'G' && c <= 'I'))
			cout << '4';
		else if ((c >= 'j' && c <= 'l') || (c >= 'J' && c <= 'L'))
			cout << '5';
		else if ((c >= 'm' && c <= 'o') || (c >= 'M' && c <= 'O'))
			cout << '6';
		else if ((c >= 'p' && c <= 's') || (c >= 'P' && c <= 'S'))
			cout << '7';
		else if ((c >= 't' && c <= 'v') || (c >= 'T' && c <= 'V'))
			cout << '8';
		else if ((c >= 'w' && c <= 'z') || (c >= 'W' && c <= 'Z'))
			cout << '9';
		else if (c == '*' || c == '#')
			cout << c;
	}
	cout << endl;
}

int main() {
	int N;
	string input;
	while(getline(cin, input)) {
		solve (input);
	}
	
    return 0;
}
