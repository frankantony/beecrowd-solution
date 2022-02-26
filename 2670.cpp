#include <cstdio>

using namespace std;

int main() {
	int A,B,C, resultado;
	scanf("%d%d%d",&A,&B,&C);
	int vet[3];
	vet[0] = B*2 + C*4;
	vet[1] = 2*A + 2*C;
	vet[2] = A*4 + B*2;
	int menor = vet[0];
	for (int i = 0;i < 3;i++)
		if (menor > vet[i])
			menor = vet[i];

	printf("%d\n", menor);
    return 0;
}
