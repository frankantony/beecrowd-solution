#include <cstdio>
#include<algorithm>

using namespace std;

int main() {
	int N, testes;
	scanf("%d",&testes);
	int contador = 1;
	while(contador <= testes) {
		scanf("%d",&N);
		long long int vet[N];
		for (int i = 0;i < N;i++)
			scanf("%lld",&vet[i]);
		sort(vet, vet + N);
		long long int resultado = 1;
		for (int i = 0;i < N;i++) {
			if (vet[i] > resultado)
				break;
			else
				resultado += vet[i];
		}
		printf("%lld\n", resultado);
		contador++;
	}
    return 0;
}

