#include <cstdio>

using namespace std;

int main() {
	int N;
	char a;
	scanf("%d %c",&N, &a);
	int vet[3] = {0,0,0};
	
	if (a == 'A')
		vet[0] = 1;
	else if (a == 'B')
		vet[1] = 1;
	else
		vet[2] = 1;
	int instrucao, aux;
	for (int i = 0;i < N;i++) {
		scanf("%d",&instrucao);
		if (instrucao == 1) {
			aux = vet[0];
			vet[0] = vet[1];
			vet[1] = aux;
		}
		else if (instrucao == 2) {
			aux = vet[1];
			vet[1] = vet[2];
			vet[2] = aux;
		}
		else {
			aux = vet[0];
			vet[0] = vet[2];
			vet[2] = aux;			
		}
	}
	for (int i = 0;i < 3;i++)
		if (vet[i] == 1)
			printf("%c\n",i + 'A');
    return 0;
}

