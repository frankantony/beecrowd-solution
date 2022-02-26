#include<bits/stdc++.h>

using namespace std;

int main() {
	int  N100 = 0, N50 = 0, N20 = 0, N10 = 0, N5 = 0, N2 = 0, M1 = 0, M50 = 0, M25 = 0, M10 = 0, M05 = 0, M01 = 0, valor, valor2;
	double valor_fracionario;
	scanf("%lf",&valor_fracionario);
	valor = (int) valor_fracionario;
	valor_fracionario -= valor;
	valor2 = (valor_fracionario * 100);

//	printf("valor2 = %d\n", valor2);
	while(valor >= 100) {
		N100++;
		valor -= 100;
	}

	while(valor >= 50) {
		N50++;
		valor -= 50;
	}

	while(valor >= 20) {
		N20++;
		valor -= 20;
	}

	while(valor >= 10) {
		N10++;
		valor -= 10;
	}

	while (valor >= 5) {
		N5++;
		valor -= 5;
	}

	while (valor >= 2) {
		N2++;
		valor -= 2;
	}
	
	while (valor >= 1) {
		M1++;
		valor -= 1;
	}
	
	M50 = valor2 / 50;
	valor2 = valor2 % 50;

	M25 = valor2 / 25;
	valor2 = valor2 % 25;

	M10 = valor2 /10;
	valor2 = valor2 % 10;

/*	while(valor2 >= 10) {
		M10++;
		valor2 -= 10;
	}
*/
	M05 = valor2 / 5;
	valor2  = valor2 % 5;
/*
	while(valor2 >= 5) {
		M05++;
		valor2 -= 5;
	}
*/
	M01 = valor2;
	valor2 = valor2 % 1;	
/*	while(valor2 >= 1) {
		M01++;
		valor2 -= 1;
	}
*/
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",N100);
	printf("%d nota(s) de R$ 50.00\n",N50);
	printf("%d nota(s) de R$ 20.00\n",N20);
	printf("%d nota(s) de R$ 10.00\n",N10);
	printf("%d nota(s) de R$ 5.00\n",N5);
	printf("%d nota(s) de R$ 2.00\n",N2);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",M1);
	printf("%d moeda(s) de R$ 0.50\n",M50);
	printf("%d moeda(s) de R$ 0.25\n",M25);
	printf("%d moeda(s) de R$ 0.10\n",M10);
	printf("%d moeda(s) de R$ 0.05\n",M05);
	printf("%d moeda(s) de R$ 0.01\n",M01);

    return 0;
}
