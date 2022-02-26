#include<bits/stdc++.h>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);	
	while(1) {
		string nomes[N];
		for (int i = 0;i < N;i++)
			nomes[i] = "";
		char nome[60];
		int max = 0, tamanho, encontrou_espaco;
		for (int i = 0;i < N;i++) {
			scanf(" %[^\n]",nome);
			tamanho = strlen(nome);
//			printf("nome: %s, tamanho: %d\n", nome, tamanho);
			encontrou_espaco = 0;
			for (int j = 0; j < tamanho; j++) {
//				printf("j = %d\n",j);
				if (nome[j] == ' ') {
					if (!encontrou_espaco)
						nomes[i] += " ";
					encontrou_espaco = 1;
				}
				else {
					nomes[i] += nome[j];
					encontrou_espaco = 0;
				}
			}
			string aux = nomes[i];
			tamanho = aux.length();
			if (aux[tamanho-1] == ' ')
				nomes[i] = nomes[i].substr(0,tamanho-1);
			tamanho = nomes[i].length();
			if (max < tamanho)
				max = tamanho;
		}
//		printf("Resultado\n");
		for (int i = 0;i < N;i++) {
			tamanho  = nomes[i].length();
			for (int j = 0; j < max - tamanho;j++)
				printf(" ");
			cout << nomes[i] << "\n";
		}
		scanf("%d",&N);
		if (N == 0) break;
		else printf("\n");
	}
    return 0;
}
