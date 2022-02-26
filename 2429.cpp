#include<cstdio>

using namespace std;

bool verifica (bool mat[][10040], int N) {
	int cont = 0;
	for (int i = 0;i < N;i++) {
		cont = 0;
		for (int j = 0;j < N;j++) {
			if (mat[i][j])
				cont++;
		}
		if (cont != 1)
			return false;
	}

	for (int i = 0;i < N;i++) {
		cont = 0;
		for (int j = 0;j < N;j++) {
			if (mat[j][i])
				cont++;
		}
		if (cont != 1)
			return false;
	}
	return true;
}

void busca_profundidade (int v, bool grafo[][10040], int N, bool *visitado) {
	visitado[v] = true;
	for (int i = 0; i < N;i++){
		if (grafo[v][i])
			if (!visitado[i])
				busca_profundidade(i, grafo, N, visitado);
	}
}

bool todos_visitados (bool* visitado, int N) {
	for (int i = 0;i < N;i++) {
		if (!visitado[i])
			return false;
	}
	return true;
}

int main() {
	
	int N, X ,Y;
	scanf("%d",&N);
	bool grafo[N][10040], visitado[N];
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			grafo[i][j] = false;
		}
		visitado[i] = false;
	}
	for (int i = 0; i < N;i++) {
		scanf("%d %d",&X,&Y);
		grafo[X-1][Y-1] = true;
	}

	busca_profundidade(0, grafo, N, visitado);
	if (verifica(grafo,N) && todos_visitados(visitado, N))
		printf("S\n");
	else
		printf("N\n");
    return 0;
}
