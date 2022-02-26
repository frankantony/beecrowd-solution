#include<cstdio>

using namespace std;

int main() {
	
	int N, resultado, custo, valor;
	while(1) {
		resultado = 0;
		scanf("%d",&N);
		if (N == 0) break;
		for (int i = 0; i < N;i++) {
			scanf("%d%d",&custo, &valor);
			valor = valor/2;
			resultado += valor;
		}
		resultado = resultado/2;
		printf("%d\n",resultado);
	}
    return 0;
}
