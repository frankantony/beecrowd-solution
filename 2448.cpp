#include <cstdio>
#include<cstdlib>

using namespace std;

int busca_binaria (int valor, int *vet, int inicio, int fim) {
	int meio = (fim + inicio)/2;
	if(valor == vet[meio])
		return meio;
	else if (valor < vet[meio])
		return busca_binaria(valor,vet, 0, meio-1);
	else if (valor > vet[meio])
		return busca_binaria(valor, vet, meio+1,fim);
}

int main() {
	int N,M;
	scanf("%d%d",&N,&M);
	int casa[N], encomendas[M];
	for (int i = 0;i < N;i++) 
		scanf("%d",&casa[i]);
	for (int i = 0;i < M;i++)
		scanf("%d",&encomendas[i]);

	int inicio = casa[0], tempo = 0, diferenca;
	for (int i = 0; i < M; i++) {
		diferenca = busca_binaria(encomendas[i], casa, 0, N) - busca_binaria(inicio, casa, 0, N);
		tempo += abs(diferenca);
		inicio = encomendas[i];
	}
	printf("%d\n", tempo);
    return 0;
}
