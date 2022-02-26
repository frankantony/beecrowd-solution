#include <iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int quantidadeFrutas (char *st) {
	int tam_s = strlen(st), cont = 1;

	for (int i = 0;i < tam_s;i++)
		if (st[i] == ' ')
			cont++;
	return cont;
}

int main () {
	int N;
	double valor, soma_peso = 0.0f, soma_preco = 0.0f;
	cin >> N;
	int contador = 1;
	char frutas[10000];
	while(contador <= N) {
		
		scanf("%lf",&valor);
		scanf(" %[^\n]",frutas);
		soma_preco += valor;
		int peso = quantidadeFrutas(frutas);
		cout << "day "<< contador << ": " << peso << " kg\n";
		soma_peso += peso;

		contador++;
	}
	printf("%.2lf kg by day\n",(soma_peso / N));
	printf("R$ %.2lf by day\n",(soma_preco / N));

	return 0;
}
