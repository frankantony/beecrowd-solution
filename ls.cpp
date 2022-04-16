#include<iostream>
#include <string>

using namespace std;

bool verify_pattern (string input, string pattern) {
	int len_pattern = pattern.length(), len_input = input.length();

	int left_asterisk = 0, right_asterisk = len_pattern-1, aux = len_input-1;
	while (left_asterisk < len_input and left_asterisk < len_pattern and pattern[left_asterisk] != '*') {
		if (pattern[left_asterisk] != input[left_asterisk])
			return false;
		left_asterisk++;
	}

	while (right_asterisk >= 0 and aux >= 0 and pattern[right_asterisk] != '*') {
		if (pattern[right_asterisk] != input[aux])
			return false;
		right_asterisk--;
		aux--;
	}

	int i = 0, j = 0;
	while (i < len_input and j < len_pattern) {
		if (pattern[j] == '*')
			j++;
		else if (pattern[j] == input[i]) {
			j++;
			i++;
		}
		else
			i++;
	}

	return j == len_pattern;
}

int main() {	
	string input, pattern;
	int n;
	cin >> pattern >> n;
	string result = "";
	while(n) {
		cin >> input;
		
		if (verify_pattern(input, pattern))
			result += input + '\n';
		n--;
	}
	cout << result;
    return 0;
}

