#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	
	int N, K;
	scanf("%d%d",&N,&K);
	long long int vet[N];
	for (int i = 0; i < N;i++)
		scanf("%lld",&vet[i]);
	sort(vet,vet+N);
	long long int min = 100000000;
	
	for (int i = 0;i < N;i++) {
		int indice = i + N-K-1;
		if (indice < N) {
			int valor = vet[indice] - vet[i];
			if (min > valor) {
				min = valor;
			}
		}
	}

	printf("%lld\n", min);
    return 0;
}
