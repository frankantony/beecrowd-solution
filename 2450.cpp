#include <cstdio>

using namespace std;

bool verifica_linha (int *mat, int N, int M, int linha) {
	int coluna = -1;
	for (int j = 0;j < M;j++) {
		printf("processando: %d, ", mat[linha*N + j]);
		if(mat[linha*N + j] != 0) {
			coluna = j;
			break;
		}
	}
	printf("Coluna = %d\n", coluna);
	for(int i = linha+1;i < N;i++) {
		for (int j = coluna;j >= 0;j--) {
			if(mat[i*N + j] != 0) 
				return false;
		}
	}
	printf("Passou por aqui\n");
	if (coluna != -1) return true;

	for(int i = linha+1;i < N;i++) {
		for (int j = 0;j < M;j++) {
			if (mat[i*N+j] != 0)
				return false;
		}
	}
	return true;
}

bool matriz_escada (int *mat, int N, int M) {

	for (int i = 0;i < N;i++) {
		printf("Linha %d\n", i);
		if (!verifica_linha (mat, N, M, i)) {
			printf("falhou na linha = %d\n", i);
			return false;
		}
	}
	return true;
}

int main() {
	int N, M;
	scanf("%d%d",&N,&M);
	int mat[N*M];
	for (int i = 0;i < N;i++) 
		for (int j = 0;j < M;j++) 
			scanf("%d",&mat[i*N + j]);
	printf("Impressao da matriz\n");
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			printf("%d ", mat[i*N + j]);
		}
		printf("\n");
	}

	if (matriz_escada(mat,N,M))
		printf("S\n");
	else
		printf("N\n");
    return 0;
}
