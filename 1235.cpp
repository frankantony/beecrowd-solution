#include<bits/stdc++.h>

using namespace std;

int main() {
	int N;
	char s[104];
	cin >> N;
    cin.ignore();
	while(N >= 1) {
		cin.getline(s,104);
		int tam_s = strlen(s),i;
		for (i = (tam_s/2)-1; i >= 0;i--)
			cout << s[i];
		for (i = tam_s-1; i >= tam_s/2;i--)
			cout << s[i];
		cout << "\n";
		N--;
	}

 
    return 0;
}
