#include<cstdio>
#include<cstring>

using namespace std;

int conta_letras (char* s) {
	bool minuscula[26], maiuscula[26];
	for (int i = 0;i < 26;i++) {
		minuscula[i] = false;
		maiuscula[i] = false;
	}
	int tam = strlen(s);
	for (int i = 0; i < tam; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			minuscula[s[i] - 'a'] = true;
		if (s[i] >= 'A' && s[i] <= 'Z')
			minuscula[s[i] - 'A'] = true;
	}
	int cont = 0;
	for (int i = 0; i < 26; i++)
		if (minuscula[i] || maiuscula[i])
			cont++;
	return cont;
}

int main() {
	int N;
	char entrada[1005];
	scanf("%d",&N);
	while(N >= 1) {
		scanf(" %[^\n]", entrada);
		int conta = conta_letras (entrada);
		if (conta == 26)
			printf("frase completa\n");
		else if(conta >= 13)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");
		N--;
	}
    return 0;
}
