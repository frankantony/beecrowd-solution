#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

int conta_subsequencia_programacao_dinamica (char *a, char *b) {
	int tam_a = strlen(a), tam_b = strlen(b);
	int mat[tam_a + 1][tam_b + 1];
	int maximo = 0;
	int indice1, indice2;
	for (int i = 0; i <= tam_a; i++) {
		for (int j = 0; j <= tam_b; j++) {
			if (i == 0 || j == 0)
				mat[i][j] = 0;
			else if (a[i-1] == b[j-1]) {
				mat[i][j] = mat[i-1][j-1] + 1;
				if (maximo <= mat[i][j]) {
					maximo = mat[i][j];
					indice1 = i;
					indice2 = j;
				}
			}
			else
				mat[i][j] = 0;
		}
	}
	int cont = 0;
// Rastreio da solução otima.
	for (int i = indice1 - maximo; i < indice1; i++) {
		printf("%c",a[i]);
		cont++;
	}
	printf("\n");
	return maximo;
}

int main() {
	char e[51], s[51];
	while(scanf(" %[^\n] %[^\n]",e,s) != EOF)
		printf("%d\n",conta_subsequencia_programacao_dinamica (e,s));
    return 0;
}
