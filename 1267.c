#include<stdio.h>

int verifica (int D, int N, int m[D][N]){
	int cont,i,j;
	for (j = 0;j < N;j++){
		cont = 0;
		for (i = 0;i < D;i++) {		
			if (m[i][j] == 1) cont++;
		}
		if (cont == D) return 1;
	}
	return 0;
}

int main() {

	int N,D;

	while(1) {
		scanf("%d%d",&N,&D);
		if (N == 0 && D == 0) break;
		int m[D][N],i,j;
		for (i = 0;i < D;i++)
			for(j = 0;j < N;j++)
				scanf("%d",&m[i][j]);
		if (verifica(D,N,m)) printf("yes\n");
		else printf("no\n");
	}

 
    return 0;
}


