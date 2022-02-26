#include <cstdio>

using namespace std;

int main() {
	int N, M;
	scanf("%d%d",&N,&M);
	char mat[N][M], aux[N][M];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf(" %c",&mat[i][j]);
			aux[i][j] = mat[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (mat[i][j] == '.') {
				if ((i-1 >= 0 && mat[i-1][j] == 'o') || (j - 1 >= 0 && mat[i][j-1] && i+1 < N && j-1 >= 0 && mat[i+1][j-1] == '#') 
					|| (j+1 < M && i + 1 < N && mat[i][j+1] == 'o' && mat[i+1][j+1] == '#'))
					mat[i][j] = 'o';
			}
		}
	}
	printf("Resultado:\n");
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			printf("%c",mat[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}

