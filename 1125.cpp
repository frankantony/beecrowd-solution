#include <iostream>
#include<cstdio>
#include<string>
 
using namespace std;
 
int main() {
	int G, P, S;
	while(1) {
		scanf("%d%d",&G,&P);
		if(G == 0 && P == 0) break;
		int m[G+1][P+1], aux[P+1];
	
		for (int i = 1;i <= G;i++)
			for (int j = 1;j <= P;j++)
				scanf("%d",&m[i][j]);
//		printf("scan(S)\n");
		scanf("%d",&S);

		int vet[S+1][P+1],K, soma = 0;
		for (int i = 1; i<= S;i++)
			for (int j = 1 ;j <=P ;j++)
				vet[i][j] = 0;
	
		for (int i = 1;i <= S;i++) {
//			printf("scan(K)\n");
			scanf("%d",&K);
			for (int j = 1; j <= K;j++) {
				scanf("%d",&vet[i][j]);
			}
		}
		for(int k = 1; k <= S; k++)	{
	//		printf("Entrou no laco\n");
			for (int i = 1; i <= P;i++) {
				soma = 0;
				for(int j = 1; j <= G;j++) {
					soma += vet[k] [m[j][i]];
				}
				aux[i] = soma;
			}
			int c = aux[1];
			for (int z = 1;z <= P; z++) {
				if (c < aux[z])
					c = aux[z];
			}
			int primeira_vez = 1;
			for (int z = 1;z <= P; z++) {
				if (aux[z] == c){
					if (primeira_vez == 1){
						printf("%d",z);
						primeira_vez = 0;
					}	
					else
						printf(" %d",z);
				}
			}
			printf("\n");
		}
	}
    return 0;
}
