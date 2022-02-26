#include<cstdio>
#include<cmath>

using namespace std;

long int conta_um (unsigned long long A) {
	long int cont = 0;
	int quantidade = log10(A)/log10(2);
	printf("quantidade = %d\n", quantidade);
	unsigned long long valor = A - pow(2, quantidade);
	printf("valor = %llu\n", valor);
	int vet[valor + 2];
	vet[0] = 0;
	vet[1] = 1;
	long int soma = 0;
	for (int i = 2; i < valor+2; i++) {
		vet[i] = 0;
		for (int j = 0; j < i; j++) {
			vet[i] += vet[j];
		}
	}
	printf("Impressão do vetor\n");
	for (int i = 0;i < valor+2;i++)
		printf("%d, ", vet[i]);
	printf("\n");
	
	for (int i = 0; i < valor+2; i++) {
			printf("passou no for\n");
			soma += (vet[i]+1);
	}
	printf("soma = %ld\n", soma);

	long int result = 1, pot = 2, var;
	for (int j = 0; j < quantidade - 1; j++) {
		result = result + (result + pot);
		printf("result = %ld\n", result);
		pot *= 2;
	}
	return result + soma;
}

int main() {
	unsigned long long A,B;
	while(scanf("%llu%llu",&A,&B) != EOF) {
		long int r = conta_um(A);
		printf("%ld\n", r);
	}
    return 0;
}
