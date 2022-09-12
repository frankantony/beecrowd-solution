#include <iostream>
#include<string>
#include<map>

using namespace std;

bool isCaracther (char letter) {
	return letter == '@' || letter == '&' || letter == '!' || letter == '*' || letter == '#';
}

void solve (string input) {
	int len = input.length();
	map<char, char> mapa;
	mapa['@'] = 'a';
	mapa['&'] = 'e';
	mapa['!'] = 'i';
	mapa['*'] = 'o';
	mapa['#'] = 'u';

	for (int i = 0;i < len;i++) {
		char c = input[i];
		if (isCaracther(c))
			cout << mapa[c];
		else 
			cout << c;
	}
	cout << endl;
}

int main() {
	string input;
	while(getline(cin, input)) {
		solve(input);
	}
    return 0;
}
