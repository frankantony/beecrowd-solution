#include <cstdio>

using namespace std;

bool verifica_linha (int mat[][500], int N, int M, int linha) {
	int coluna = -1;
	for (int j = 0;j < M;j++) {
		if(mat[linha][j] != 0) {
			coluna = j;
			break;
		}
	}

	for(int i = linha+1;i < N;i++) {
		for (int j = coluna;j >= 0;j--) {
			if(mat[i][j] != 0) 
				return false;
		}
	}

	if (coluna != -1) return true;

	for(int i = linha+1;i < N;i++) {
		for (int j = 0;j < M;j++) {
			if (mat[i][j] != 0)
				return false;
		}
	}
	return true;
}

bool matriz_escada (int mat[][500], int N, int M) {

	for (int i = 0;i < N;i++) {
		if (!verifica_linha (mat, N, M, i)) {
			return false;
		}
	}
	return true;
}


int main() {
	int N, M;
	scanf("%d%d",&N,&M);
	int mat[N][500];
	for (int i = 0;i < N;i++) 
		for (int j = 0;j < M;j++) 
			scanf("%d",&mat[i][j]);

	if (matriz_escada(mat, N,M))
		printf("S\n");
	else
		printf("N\n");
    return 0;
}
