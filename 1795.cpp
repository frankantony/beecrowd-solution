#include<cstdio>

using namespace std;

int main() {
	int linha, cont;
	scanf("%d",&linha);

	long long int mat[linha+1][(linha+1)*2];
	for (int i = 0;i < linha+1;i++) 
		for (int j = 0;j < (linha+1)*2;j++)
			mat[i][j] = 0;
	mat[0][linha+1] = 1;
	for (int j = 1; j < linha+1; j++) {
		for (int i = 1; i < (linha+1)*2;i++) {
			if (mat[j][i] == 0)
				mat[j][i] = mat[j-1][i] + mat[j-1][i-1] + mat[j-1][i+1];
		}
	}
	long long int soma = 0;
	for (int i = 0;i < (linha+1)*2;i++)
		soma += mat[linha][i];
	printf("%lld\n", soma);

    return 0;
}

