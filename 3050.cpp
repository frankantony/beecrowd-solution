#include <cstdio>
#include<algorithm>

using namespace std;

struct Ponto {
	int valor, pos;
};

int mod (int x) {
	if (x >= 0)
		return x;
	return -x;
}

bool compara (Ponto x, Ponto y) {
	return x.valor > y.valor;
}

int main() {
	int N,M, cont = 0;
	scanf("%d",&N);
	Ponto ponto[N];
	for (int i = 0; i < N; i++) {
		scanf("%d",&ponto[i].valor);
		ponto[i].pos = i;
	}

	int maior = -1000;
	for (int i = 0;i < N;i++) {
		for (int j = i+1;j < N;j++) {
			int valor = mod(ponto[i].pos - ponto[j].pos) + ponto[i].valor + ponto[j].valor;
			if (maior < valor)
				maior = valor;
		}
	}

	printf("%d\n", maior);
    return 0;
}

