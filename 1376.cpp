#include<cstdio>

using namespace std;

int verifica (int a, int b, int N) {
	return b == (a+1) % N;
}

int main() {
	int N, R, C, K;
	while(1) {
		scanf("%d%d%d%d",&N,&R,&C,&K);
		if (N == 0 && R == 0 && C == 0 && K == 0) break;
		int mat[R][C], aux[R][C];
		bool passou[R][C];
		for (int i = 0; i < R;i++) 
			for (int j = 0;j < C;j++) 
				scanf("%d",&mat[i][j]);
		while(K >= 1) {
			for (int i = 0;i < R;i++)
				for (int j = 0;j < C;j++)
					passou[i][j] = false;

			for (int i = 0; i < R;i++) {
				for (int j = 0;j < C;j++) {
						if (i-1 >= 0) {
							if (verifica(mat[i][j], mat[i-1][j], N)) {
								aux[i-1][j] = mat[i][j];
								passou[i-1][j] = true;
							}
						}
						if (i+1 < R) {
							if (verifica(mat[i][j], mat[i+1][j], N)) {
								aux[i+1][j] = mat[i][j];
								passou[i+1][j] = true;
							}
						}
						if (j - 1 >= 0) {
							if (verifica(mat[i][j], mat[i][j-1], N)){
								aux[i][j-1] = mat[i][j];
								passou[i][j-1] = true;
							}
						}
						if (j+1 < C) {
							if (verifica(mat[i][j], mat[i][j+1], N)) {
								aux[i][j+1] = mat[i][j];
								passou[i][j+1] = true;
							}
						}
					}
				}
			for (int i = 0; i < R;i++) {
				for (int j = 0;j < C;j++) {
					if (passou[i][j])
						mat[i][j] = aux[i][j];
				}
			}
			K--;
		}
		
		for (int i = 0;i < R;i++) {
			for (int j = 0;j < C;j++) {
				if(j != 0) {
					if (passou[i][j])
						printf(" %d",aux[i][j]);
					else
						printf(" %d", mat[i][j]);
				}
				else {
					if (passou[i][j])
						printf("%d",aux[i][j]);
					else
						printf("%d", mat[i][j]);
				}
			}
			printf("\n");
		}
	}
    return 0;
}
