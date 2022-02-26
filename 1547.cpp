#include <cstdio>
#include<algorithm>

using namespace std;

int mod (int x) {
	if (x >= 0)
		return x;
	else
		return -x;
}

int main() {
	int N, testes, valor;
	scanf("%d",&testes);
	int contador = 1;
	while(contador <= testes) {
		scanf("%d%d",&N, &valor);
		int vet[N], aux[N], cont = 0;
		for (int i = 0;i < N;i++)
			scanf("%d",&vet[i]);
		int menor = 2138821372, indice,i;
		
		for (i = 0; i < N; i++) {
			if (vet[i] == valor) {
				printf("%d\n",i+1);
				break;
			}
			else {
				int val = mod (valor-vet[i]);
				if (menor > val) {
					indice = i;
					menor = val;
				}
			}
		}
		if(i == N)
			printf("%d\n", indice+1);
		contador++;
	}
    return 0;
}

