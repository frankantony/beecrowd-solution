#include<bits/stdc++.h>

using namespace std;

int main() {
	int N,i;
	scanf("%d",&N);
	char s[1005];
	while (N >= 1) {
		scanf("%s",s);
		int tam_s = strlen(s);
		string sem_pontos = "";
		for (i = 0;i < tam_s;i++) {
			if (s[i] == '<' || s[i] == '>')	
				sem_pontos = sem_pontos + s[i];
		}
		int tam_sem_pontos = sem_pontos.length();
		char pilha[tam_sem_pontos + 1];
		int p = 0, cont = 0;
		for (i = 0; i < tam_sem_pontos; i++) {
			if (sem_pontos[i] == '>' && p != 0 && pilha[p-1] == '<')	{
				p--;
				cont++;
			}
			else {
				pilha[p++] = sem_pontos[i];
			}
		}
		printf("%d\n", cont);
		N--;
	}

    return 0;
}
