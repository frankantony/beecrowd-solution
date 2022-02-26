#include<bits/stdc++.h>

using namespace std;

int calcula (char *a) {
	int saiu = 0, cont = 0;
	for (int i = 0;i < strlen(a)-1;i++) {
		if (a[i] == a[i+1] && saiu == 0) {
			cont++;
			saiu = 1;
		} else if (a[i] != a[i+1]) {
			saiu = 0;
		}
	}
	return cont;
}


int main() {
	char c,iniciais[101];
	int p = 0, inicial = 1;
	while(scanf("%c",&c) != EOF) {
		if (c == '\n') {
			iniciais[p] = '\0';
			cout << calcula(iniciais) << "\n";
			
			p = 0;
			iniciais[p] = '\0';
			inicial = 1;
		}
		else if (inicial == 1) {
			if (c >= 'a' && c <= 'z')
				iniciais[p++] = c;
			else
				iniciais[p++] = c+32;
			inicial = 0;
		}
		if (c == ' ') {
			inicial = 1;
		}

	}

 
    return 0;
}
