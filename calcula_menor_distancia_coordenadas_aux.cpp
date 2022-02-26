#include<bits/stdc++.h>

using namespace std;

struct Coordenada {
	int X;
	int Y;
};

int mod (int x) {
	if (x >= 0) return x;
	return -x;
}

float dist (Coordenada a, Coordenada b) {
	float distancia = sqrt (pow(a.X-b.X,2) + pow(a.Y-b.Y,2));
	return distancia;
}

bool compara (Coordenada a, Coordenada b) {
//	if (a.X != a.Y)
		return mod (a.X-b.X) < mod (a.Y-b.Y);
}

/*float calcula (int indice, Coordenada *c){
	Coordenada candidata_menor = c[indice];
	float distancia_candidata = dist (c[indice],c[0]);
	for (j = 0;j < N;j++) {
		if (j != indice){
			distancia = dist (candidata_menor,c[j]);
			if (distancia < distancia_candidata) {
				distancia_candidata = distancia;
				candidata_menor = c[j];
			}
		}
	}
}
*/
int main() {
	int N,i,j;
	scanf("%d",&N);
	Coordenada c[N];
	
	for (i = 0;i < N;i++)
		scanf("%d%d",&c[i].X,&c[i].Y);
		
	float distancia;

	printf("Distâncias....\n");
	float menor_distancia = dist (c[0],c[1]);
	for (i = 0;i < N;i++) {
		for (j = i+1;j < N;j++) {
			distancia = dist (c[i],c[j]);
			if (distancia < menor_distancia)
				menor_distancia = distancia;
			printf("distancia de (%d,%d) para (%d,%d): %f\n",c[i].X,c[i].Y,c[j].X,c[j].Y,distancia);
		}
	}
	printf("A menor distancia entre os pontos: %f\n",menor_distancia);
	
	sort(c, c + N, compara);
	printf("Vetor ordenado...\n");
	for (i = 0;i < N;i++)
		printf("(%d,%d)\n",c[i].X,c[i].Y);

	Coordenada candidata_menor = c[0];
	float distancia_candidata = dist (c[0],c[1]);
	for (j = 2;j < N;j++) {
		distancia = dist (candidata_menor,c[j]);
		if (distancia < distancia_candidata) {
			distancia_candidata = distancia;
			candidata_menor = c[j];
		}
	}

	candidata_menor = c[N-1];
	float distancia_candidata2 = dist (c[N-1],c[0]);
	for (j = 1;j < N-1;j++) {
		distancia = dist (candidata_menor,c[j]);
		if (distancia < distancia_candidata2) {
			distancia_candidata2 = distancia;
			candidata_menor = c[j];
		}
	}

	if (distancia_candidata2 < distancia_candidata)
		printf("distancia menor aplicando a escolha gulosa: %f\n", distancia_candidata2);
	else
		printf("distancia menor aplicando a escolha gulosa: %f\n", distancia_candidata);

    return 0;
}

/*
CAso que falhou:

10
2132131 321321
3213821 32131
3721 323821
2139821 -321321
-3921 -32193721

-31293721 31931
-218371837 3129318
-128313 3138
-31321 312312
-3391831 219381

*/


