#include<cstdio>
 
using namespace std;
 
bool verifica (int D, int N, int m[D][N]){
	int cont;
	for (int j = 0;j < N;j++){
		cont = 0;
		for (int i = 0;i < D;i++) {		
			if (m[i][j] == 1) cont++;
		}
		if (cont == D) return true;
	}
	return false;
}

int main() {

	int N,D;

	while(1) {
		scanf("%d%d",&N,&D);
		if (N == 0 && D == 0) break;
		int m[D][N];
		for (int i = 0;i < D;i++)
			for( int j = 0;j < N;j++)
				scanf("%d",&m[i][j]);
		if (verifica(D,N,m)) printf("yes\n");
		else printf("no\n");
	}

 
    return 0;
}


