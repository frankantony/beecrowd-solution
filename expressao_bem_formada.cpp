#include<bits/stdc++.h>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	char s[1005];
		scanf(" %[^\n]",s);
		printf("s = %s\n",s);
		int tam_s = strlen(s);
		char pilha[tam_s + 1];
		int p = 0;

		for (int i = 0; i < tam_s; i++) {
			printf("s[i] = %c\n", s[i]);
			if (s[i] == ')' && p != 0 && pilha[p-1] == '(')	{
				p--;
			}
			if (s[i] == ']' && p != 0 && pilha[p-1] == '[') {
				p--;
			}
			if (s[i] == '}' && p != 0 && pilha[p-1] == '}') {
				p--;
			}
			if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
				pilha[p++] = s[i];
			}
		}
		printf("pilha = %d\n",pilha[p-1]);
		if (p == 0)		
			printf("Expressão bem formada\n");
		else
			printf("Expressão mal formada\n");

    return 0;
}
