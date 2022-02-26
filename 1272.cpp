#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main() {
	int N;
	char s[51];
	cin >> N;
    cin.ignore();
	while(N) {
		cin.getline(s,51);
		char *x = strtok(s," ");
		while(x != NULL) {
			cout << x[0];
			x = strtok(NULL," ");
		}
		cout << "\n";

		N--;
	}

 
    return 0;
}
