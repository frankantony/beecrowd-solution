#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	
	int N, M, N1,M1;
	while(true) {
		scanf("%d%d",&N,&M);
		if (N == 0 && M == 0)
			break;
		char mat[N][M];
		for (int i = 0;i < N;i++)
			for (int j = 0;j < M;j++)
				scanf(" %c",&mat[i][j]);
		scanf("%d%d",&N1,&M1);
		int vezes_N = N1/N, vezes_M = M1/M;
		for (int i = 0;i < N;i++) {
			for (int k = 0; k < vezes_N; k++) {
				for(int j = 0;j < M;j++) {
					for(int z = 0; z < vezes_M;z++)
						printf("%c",mat[i][j]);
				}
				printf("\n");
			}
		}
		printf("\n");
	}
    return 0;
}
