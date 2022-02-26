#include <cstdio>
#include<map>

using namespace std;

int conta_soma_zero_nao_contiguo (int i, int soma, int conta, int *vet, int n) {
	if (i == n) {
		if (soma == 0 && conta > 0)
			return 1;
		else
			return 0;
	}
	int resultado = 0;
	resultado += conta_soma_zero_nao_contiguo (i + 1, soma, conta, vet, n);

	resultado += conta_soma_zero_nao_contiguo (i + 1, soma + vet[i], conta + 1, vet, n);

	return resultado;
}

long long int conta_soma_zero_contiguo (long long int *vet, long long int n, long long int k) {
	map<long long int, long long int> mapa;
	long long int conta = 0;
	long long int soma = 0;
	mapa[0] = 1;
	for (long long int i = 0;i < n;i++) {
		soma += vet[i];
		if (mapa.find(soma - k) != mapa.end())
			conta += mapa[soma];
		if (mapa.find(soma) == mapa.end())
			mapa[soma] = 1;
		else
			mapa[soma] = mapa[soma] + 1;
	}
	return conta;
}

int main() {
	long long int N;
	scanf("%lld",&N);
	long long int vet[N];
	for (long long int i = 0;i < N;i++)
		scanf("%lld",&vet[i]);
 	printf("%lld\n", conta_soma_zero_contiguo (vet, N, 0));
    return 0;
}

