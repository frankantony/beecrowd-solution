#include <iostream>
#include<cstring>

using namespace std;

bool isWord (char *s) {
	int len = strlen(s);
	if (s[len-1] == '.') {
		len--;
	}
	for (int i = 0;i < len;i++) {
		bool isLetter = (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z');
		if (!isLetter)
			return false;
	}
	return true;
}

int main() {
	int words, letters_words;
	int average;
	char str[54];
	while (cin.getline(str, 54)) {
		words = 0;
		letters_words = 0;
		char *ptr = strtok(str, " ");
		while (ptr != NULL) {
			if (isWord(ptr)) {
				int len_ptr = strlen(ptr);
				letters_words += (ptr[len_ptr-1] == '.') ? len_ptr - 1 : len_ptr;
				words++;
			}
			ptr = strtok(NULL, " ");
		}
		if (words == 0)
			average = 0;
		else
			average = letters_words/words;
		if (average <= 3)
			cout << "250" << endl;
		else if (average == 4 || average == 5)
			cout << "500" << endl;
		else
			cout << "1000" << endl;
	}

   return 0;
}
