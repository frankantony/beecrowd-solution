#include <stdio.h>
 
int main() {
	char nome[256];
	int cont = 0;
	double med = 0, distancia;
	
	while(scanf(" %[^\n] %lf",nome,&distancia) != EOF) {
		med += distancia;
		cont++;
	}
	printf("%.1lf\n",med/cont);
 
    return 0;
}
