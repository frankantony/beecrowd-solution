#include <iostream>

using namespace std;

void buscaProfundidade (int N, bool *grafo, bool *visitado, int v) {
	visitado[v] = true;
	for (int i = 0;i < N;i++) {
		if (grafo[v*N + i]) {
			if (!visitado[i])
				buscaProfundidade(N, grafo, visitado, i);
		}
	}
}

bool verificaConectividade(int N, bool *grafo) {
	bool visitado[N];
	for (int i = 0;i < N;i++)
		visitado[i] = false;
	
	buscaProfundidade(N, grafo, visitado, 0);

	for (int i = 0;i < N;i++)
		if (!visitado[i])
			return false;
	
	for (int i = 0;i < N;i++)
		visitado[i] = false;

	bool transposta[N*N];
	for (int i = 0; i < N;i++)
		for (int j = 0; j < N;j++)
			transposta[i*N + j] = grafo[j*N + i];
	
	buscaProfundidade(N, transposta, visitado,0);

	for (int i = 0;i < N;i++)
		if (!visitado[i])
			return false;
	
	return true;	
}

int main () {
	int N, M, V, W, P;
	while(1) {
		cin >> N;
		cin >> M;
		if (N == 0 && M == 0) break;
		bool grafo[N*N];
		for (int i = 0;i < N;i++)
			for (int j = 0;j < N;j++)
				grafo[i*N+j] = false;
		for (int i = 0; i < M; i++) {
			cin >> V;
			cin >> W;
			cin >> P;
			if (P == 1)
				grafo[(V-1)*N + (W-1)] = true;
			else if (P == 2) {
				grafo[(V-1)*N + (W-1)] = true;
				grafo[(W-1)*N + (V-1)] = true;
			}
		}

		cout << verificaConectividade(N, grafo) << "\n";
	}
	return 0;
}
