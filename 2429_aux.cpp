#include<cstdio>

using namespace std;

int adjacente[10005];
int grau_entrada[10005];
int grau_saida[10005];

bool verifica (int* adjacente, int* grau_entrada, int* grau_saida, bool *visitado, int N) {
	for (int i = 1;i <= N;i++)
		if (grau_entrada[i] != 1 || grau_saida[i] != 1)
			return false;
	int v = 1;
	while (visitado[v] == false) {
		visitado[v] = true;
		v = adjacente[v];
	}

	for (int i = 1;i <= N;i++)
		if (!visitado[i])
			return false;

	return true;
}

int main() {
	
	int N, X ,Y;
	scanf("%d",&N);
	bool visitado[N+1];
	for (int i = 1;i <= N;i++) {
		grau_saida[i] = grau_entrada[i] = 0;
		visitado[i] = false;
	}

	for (int i = 0; i < N; i++) {
		scanf("%d %d",&X,&Y);
		adjacente[X] = Y;
		grau_entrada[Y]++;
		grau_saida[X]++;
	}

	if (verifica(adjacente, grau_entrada, grau_saida, visitado, N))
		printf("S\n");
	else
		printf("N\n");
    return 0;
}
