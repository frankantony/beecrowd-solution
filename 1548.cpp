#include <cstdio>
#include<algorithm>

using namespace std;

bool compara (int a, int b) {
	return a > b;
}

int main() {
	int N, testes;
	scanf("%d",&testes);
	int contador = 1;
	while(contador <= testes) {
		scanf("%d",&N);
		int vet[N], aux[N], cont = 0;
		for (int i = 0;i < N;i++)
			scanf("%d",&vet[i]);

		for (int i = 0;i < N;i++)
			aux[i] = vet[i];
		sort(vet,vet + N, compara);
		for (int i = 0;i < N;i++)
			if (aux[i] == vet[i])
				cont++;
		printf("%d\n", cont);
		contador++;
	}
    return 0;
}

