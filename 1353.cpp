#include<cstdio>

using namespace std;

long int fatorial (long int N) {
	long int fat[N+1];
	fat[0] = 1;
	
	for (int i = 1;i <= N;i++) {
		fat[i] = i*fat[i-1];
		fat[i] %= 1000000009;
	}
	return fat[N];
}

long int combinacao (long int N, long int K) {
	return (fatorial(N)/(fatorial(N-K) * fatorial(K))) % 1000000009;
}

//Numero de solucoes de x_1 + x_2 + ... + x_k = N, sendo x_i inteiros não-negativos, incluindo o 0.
long int cr (long int N, long int K) {
	return combinacao(N+K-1,K);
}

int main() {
	long int  N, K;
	int Z = 1000000000;
	printf("%d\n",Z);
	while(1) {
		
		scanf("%ld%ld",&N,&K);
		
		long int f = cr (N, K);
		printf("%ld\n", f);
	}

    return 0;
}
