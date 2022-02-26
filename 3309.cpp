#include <cstdio>
#include<map>

using namespace std;

bool feliz (int N) {
	int aux = N, soma = 0, cont = 0, var;
	map<int, int> mapa;
	if (N == 1) return true;
	while(true) {
		if (N == 0) {
			if (soma == aux || mapa.find(soma) != mapa.end())
				return false;
			else if (soma == 1)
				return true;
			else {
				N = soma;
				mapa[soma] = 1;
				soma = 0;
			}
			
		}
		soma += (N % 10)*(N % 10);
		N /= 10;
		
	}
	return false;
}

int main() {
	int N, cont = 0;
	scanf("%d",&N);
	int valor;
	for (int i = 0;i < N;i++) {
		scanf("%d", &valor);
		if (feliz(valor)) {
			cont++;
		}
	}
	printf("%d\n",cont);
    return 0;
}
