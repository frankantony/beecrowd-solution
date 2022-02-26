#include<cstdio>
 
using namespace std;

int main() {

	int P, S, N, T1, T2, T3;

	while(1) {
		scanf("%d%d",&P,&S);
		if (P == 0 && S == 0) break;
		bool podejogar[P+1];
		int ultima_posicao[P+1];
		for (int i = 1;i <= P;i++) {
			ultima_posicao[i] = 0;
			podejogar[i] = true;
		}

		scanf("%d%d%d%d",&T1, &T2, &T3, &N);

		int D1, D2, soma[N];
		for (int j = 0;j < N;j++) {
			scanf("%d%d",&D1,&D2);
			soma[j] = D1 + D2;
		}
		int i = 1, j = 0;
		while (j < N) {
				if (podejogar[i]) {
					ultima_posicao[i] = ultima_posicao[i] + soma[j];
					if (ultima_posicao[i] == T1 || ultima_posicao[i] == T2 || ultima_posicao[i] == T3)
						podejogar[i] = false;
					if (ultima_posicao[i] > S) {
						printf("%d\n",i);
						break;
					}
					j++;
				}
				else {
					podejogar[i] = true;
				}
				i = i+1;
				if (i > P)
					i = 1;
		}
		
	}
    return 0;
}


