#include <cstdio>
 
using namespace std;

int main() {
    int N,M,L,C;
	scanf("%d%d",&N,&M);
	scanf("%d%d",&L,&C);
	L--;
	C--;
	int mat[N][M];
	for (int i = 0;i < N;i++)
		for (int j = 0;j < M;j++)
			scanf("%d",&mat[i][j]);

	while (1) {
		if (L-1 >= 0 && mat[L-1][C] == 1) {
			mat[L][C] = 0;
			L--;
		}
		else if (C - 1 >= 0 && mat[L][C-1] == 1) {
			mat[L][C] = 0;
			C--;
		}
		else if (C + 1 < M && mat[L][C+1] == 1) {
			mat[L][C] = 0;
			C++;
		}
		else if (L + 1 < N && mat[L+1][C] == 1) {
			mat[L][C] = 0;
			L++;
		}
		else
			break;
	}
	printf("%d %d\n", (L+1),(C+1));


    return 0;
}
