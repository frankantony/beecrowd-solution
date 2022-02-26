#include<cstdio>

using namespace std;

int main() {
	
	int N, casos, valor, cont;
	scanf("%d",&casos);
	int contador = 1, resultado;
	while(contador <= casos) {
		cont = 0;
		scanf("%d",&N);
		for (int i = 0; i < N;i++) {
			scanf("%d",&valor);
			cont++;
			int v = (N/2) + 1;
			if (v == cont)
				resultado = valor;
		}
		printf("Case %d: %d\n", contador++,resultado);
	}
    return 0;
}
