#include<cstdio>

using namespace std;

int main() {
	
	int N, saldo, operacao;
	scanf("%d",&N);
	scanf("%d",&saldo);
	scanf("%d",&operacao);
	int maior = saldo + operacao;
	saldo = maior;
	int contador = 1;
	while(contador < N) {
		scanf("%d",&operacao);
		saldo += operacao;
		if (maior > saldo)
			maior = saldo;
		contador++;
	}
	printf("%d\n",maior);
    return 0;
}
