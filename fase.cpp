#include<cstdio>
#include<algorithm>

using namespace std;

int compara (int X, int Y) {
	return X > Y;
}

int main () {
	
	int N, K;
	scanf("%d%d",&N,&K);
	int vet[N+1];
	for(int i = 0;i < N;i++)
		scanf("%d",&vet[i]);
		vet[N] = -1;
	sort(vet, vet + N, compara);

	int cont = 0;
	for (int j = K-1; j < N;j++) {
		if (vet[j]  == vet[j+1])
			cont++;
		else 
			break;
	}
	int resultado = K + cont;  
	printf("%d\n", resultado);
	return 0;
}
