#include<iostream>
#include<string>

using namespace std;

bool isVowel (char l) {
	return l == 'a' || l == 'A' || l == 'e' || l == 'E' 
			|| l == 'i' || l == 'I' || l == 'o' || l == 'O' || l == 'u' || l == 'U';
}

bool isHard (string st) {
	int len = st.size();
	for (int i = 0; i < len-2; i++)
		if (!isVowel(st[i]) && !isVowel(st[i+1]) && !isVowel(st[i+2]))
			return true;
	return false;
}

int main() {
	string st;
	int T;
	cin >> T;
	while (T) {
		cin >> st;
		bool hard = isHard(st);
		if (hard)
			cout << st << " nao eh facil\n";
		else
			cout << st << " eh facil\n";
		T--;
	}

    return 0;
}

