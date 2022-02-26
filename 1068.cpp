#include<bits/stdc++.h>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	char s[1005];
		while(scanf("%s",s) != EOF) {
		int tam_s = strlen(s);
		char pilha[tam_s+1];
		int p = 0, passou = 0;
		for (int i = 0; i < tam_s; i++) {
			if (s[i] == ')' && p == 0) {
				printf("incorrect\n");
				passou = 1;
				break;
			}
			if (s[i] == ')' && p != 0 && pilha[p-1] == '(')	{
				p--;
			}
			if (s[i] == '(') {
				pilha[p++] = s[i];
			}
		}
		if (!passou) {
			if (p == 0)
				printf("correct\n");
			else
				printf("incorrect\n");
		}
	}
    return 0;
}
