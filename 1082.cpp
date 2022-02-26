#include <cstdio>
#include <vector>
#include<algorithm>

using namespace std;

vector <char> vet;

void buscaProfundidade (int N, bool *grafo, bool *visitado, int v) {
	visitado[v] = true;
	char car = (v + 'a');
	vet.push_back(car);
	for (int i = 0;i < N;i++) 
		if (grafo[v*N + i]) 
			if (!visitado[i]) 
				buscaProfundidade(N, grafo, visitado, i);
}

void componentes(int N, bool *grafo, int v) {
	bool visitado[N];
	for (int i = 0;i < N;i++)
		visitado[i] = false;
	int cont = 0;
	for (int i = 0;i < N;i++) {
		if (!visitado[i]) {
			buscaProfundidade(N, grafo, visitado, i);
			sort(vet.begin(),vet.end());
			for (int j = 0;j < vet.size();j++)
				printf("%c,",vet[j]);
			printf("\n");
			vet.clear();
			cont++;
		}
	}
	printf("%d connected components\n", cont);
}

int main () {
	int N, M, casos;
	char V,W;
	scanf("%d",&casos);
	int contador = 1;
	while(contador <= casos) {
		scanf("%d%d",&N,&M);
		bool grafo[N*N];
		for (int i = 0;i < N;i++)
			for (int j = 0;j < N;j++)
				grafo[i*N+j] = false;
		for (int i = 0; i < M; i++) {
			scanf(" %c",&V);
			scanf(" %c",&W);
			grafo[(V-'a')*N + (W-'a')] = true;
			grafo[(W-'a')*N + (V-'a')] = true;
		}
		printf("Case #%d:\n",contador);
		componentes(N, grafo, 0);
		printf("\n");
		contador++;
	}
	return 0;
}
