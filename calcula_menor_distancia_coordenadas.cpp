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

bool comparaX (Coordenada a, Coordenada b) {
		return a.X < b.X;
}

bool comparaY (Coordenada a, Coordenada b) {
		return a.Y < b.Y;
}

float calcula (int indice, int N, Coordenada *c){
	Coordenada candidata_menor = c[indice];
	float distancia_candidata = dist (c[indice],c[1]);
	for (int j = 0;j < N;j++) {
		if (j != indice && j != 1) {
			float distancia = dist (candidata_menor,c[j]);
			if (distancia < distancia_candidata) {
				distancia_candidata = distancia;
				candidata_menor = c[j];
			}
		}
	}
	return distancia_candidata;
}

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
	
	sort(c, c + N, comparaX);
	sort(c, c + N, comparaY);

	printf("Vetor ordenado...\n");
	for (i = 0;i < N;i++)
		printf("(%d,%d)\n",c[i].X,c[i].Y);
	
/*	float candidata1 = calcula (0, N, c);
	float candidata2 = calcula (N-1, N, c);

	if (candidata1 < candidata2)
		printf("distancia menor aplicando a escolha gulosa: %f\n", candidata1);
	else
		printf("distancia menor aplicando a escolha gulosa: %f\n", candidata2);
*/
    return 0;
}
