#include <cstdio>

using namespace std;

int main() {
	int vet[5];
	for (int i = 0;i < 5;i++)
		scanf("%d",&vet[i]);
	bool crescente = false, decrescente = false;
	for (int i = 0;i < 4;i++) {
		if ((crescente && vet[i] > vet[i+1]) || (decrescente && vet[i] < vet[i+1])) {
			printf("N\n");
			crescente = decrescente = false;
			break;
		}
		if (vet[i] <= vet[i+1])
			crescente = true;
		else
			decrescente = true;
	}
	if (crescente)
		printf("C\n");
	if (decrescente)
		printf("D\n");

    return 0;
}
