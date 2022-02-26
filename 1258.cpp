#include<bits/stdc++.h>

using namespace std;

struct Camiseta {
	char nome[100];
	char cor[50];
	char tamanho;
};

bool compara (Camiseta a, Camiseta b) {
	if (strcmp(a.cor,b.cor) != 0)
		return strcmp(a.cor, b.cor) < 0;
	if (a.tamanho != b.tamanho)
		return a.tamanho > b.tamanho;
	if (strcmp(a.nome,b.nome) != 0)
		return strcmp(a.nome, b.nome) < 0;
}

int main() {
	int N,i;

	scanf("%d",&N);
	while (1) {
		if (N == 0) break;
		Camiseta camiseta[N];
		for (i = 0;i < N;i++) {
			scanf(" %[^\n]%s %c",camiseta[i].nome,camiseta[i].cor, &camiseta[i].tamanho);
		}

		sort(camiseta,camiseta + N,compara);
		for (i = 0;i < N;i++)
			printf("%s %c %s\n",camiseta[i].cor, camiseta[i].tamanho,camiseta[i].nome);
		scanf("%d",&N);
		if (N != 0)
			printf("\n");
	}

    return 0;
}
