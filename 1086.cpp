#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	
	int N, M, L, K;
	while(true) {
		scanf("%d%d",&N,&M);
		if (N == 0 && M == 0)
			break;
		scanf("%d%d",&L,&K);
		int quantidade = (N *L) / 100; // numero de tábuas usadas para a largura.
		//Considerando N o menor dos lados, conforme ilustra a Figura à esquerda.
		int tabuas[K];
		for (int i = 0;i < K;i++)
			scanf("%d",&tabuas[i]);
		sort(tabuas, tabuas + K);

		int i = 0, j = K-1, conta = 0, pares = 0;
		while (i < j) {
//			printf("i = %d, j = %d\n", i, j);
			if (tabuas[i] == M) {
				pares++;
				conta++;
				i++;
			}
			else if (tabuas[j] == M) {
				pares++;
				conta++;
				j--;
			}
			else if (tabuas[i] + tabuas[j] == M) {
				pares++;
				conta = conta + 2;
				j--;
				i++;
			}
			else
				j--;
			if (pares == quantidade)
				break;
		}
		if (tabuas[i] == M) {
			pares++;
			conta++;
		}
//		printf("pares = %d\n", pares);
		if (pares == quantidade)
			printf("%d\n", conta);
		else
			printf("impossivel\n");
	}
    return 0;
}
