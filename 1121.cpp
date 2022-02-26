#include <iostream>
#include<cstdio>
#include<string>
 
using namespace std;
 
int main() {
	int N, M, S, linha, coluna;
	char ultima_direcao;
	while(1) {
		scanf("%d%d%d",&N,&M,&S);
		if (N == 0 && M == 0 && S == 0) break;
		char arena[N][M];
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < M;j++) {
				scanf(" %c",&arena[i][j]);
				char valor = arena[i][j];
				if (valor == 'S' || valor == 'N' || valor == 'L' || valor == 'O') {
					linha = i; coluna = j;
					ultima_direcao = valor;
				}
			}
		}
		char instrucao[S+1];
		int cont = 0;
		for (int i = 0;i < S;i++)
			scanf(" %c",&instrucao[i]);
		for (int i = 0;i < S;i++) {
			if (instrucao[i] == 'D') {
				if (ultima_direcao == 'N')
					ultima_direcao = 'L';
				else if (ultima_direcao == 'S')
					ultima_direcao = 'O';
				else if(ultima_direcao == 'L')
					ultima_direcao = 'S';
				else if (ultima_direcao == 'O')
					ultima_direcao = 'N';
			}
			if (instrucao[i] == 'E') {
				if (ultima_direcao == 'N')
					ultima_direcao = 'O';
				else if (ultima_direcao == 'S')
					ultima_direcao = 'L';
				else if(ultima_direcao == 'L')
					ultima_direcao = 'N';
				else if (ultima_direcao == 'O')
					ultima_direcao = 'S';
			}
			if (instrucao[i] == 'F') {
				if (ultima_direcao == 'N') {
					if (linha - 1 >= 0 && arena[linha-1][coluna] != '#') {
						linha--;
						if (arena[linha][coluna] == '*') {
							cont++;
							arena[linha][coluna] = '.';
						}
					}
				}
				else if (ultima_direcao == 'S') {
					if (linha + 1 < N && arena[linha+1][coluna] != '#') {
						linha++;
						if (arena[linha][coluna] == '*') {
							cont++;
							arena[linha][coluna] = '.';
						}
					}
				}
				else if (ultima_direcao == 'L') {
					if (coluna + 1 < M && arena[linha][coluna + 1] != '#') {
						coluna++;
						if (arena[linha][coluna] == '*') {
							cont++;
							arena[linha][coluna] = '.';
						}
					}
				}
				else if (ultima_direcao == 'O') {
					if (coluna - 1 >= 0 && arena[linha][coluna-1] != '#') {
						coluna--;
						if (arena[linha][coluna] == '*') {
							cont++;
							arena[linha][coluna] = '.';
						}
					}
				}

			}
		}
		printf("%d\n", cont);
	}
    return 0;
}
