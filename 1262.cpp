#include<bits/stdc++.h>

using namespace std;

int main() {
	int P, cont, result;
	char s[51];
	while(scanf(" %s%d",s,&P) != EOF) {
		int tam_s = strlen(s);
		s[tam_s] = '-';
		s[tam_s + 1] = '\0';
		cont = 1;
		result = 0;
		for (int i = 0;i < strlen(s)-1;i++) {
			if (s[i] != s[i+1]) {
				if (s[i] == 'W') {
					result += cont;
				}
				if(s[i] == 'R') {
					result += cont/P;
					if (cont % P != 0) 
						result++;
				}
				cont = 1;
			} 
			else {
				cont++;
			}
		}
		printf("%d\n", result);
	}

 
    return 0;
}
