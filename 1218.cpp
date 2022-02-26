#include<cstdio>
#include<cstring>

struct Calcado {
	char numero[10];
	char genero[10];
};

int main() {
	int caso = 1, primeira_vez = 0;
	char numero[10], entrada[1000];

	Calcado calcados[1000];
	scanf(" %[^\n]",numero);
	scanf(" %[^\n]", entrada);
	while(true) {
		char *p;
		p = strtok(entrada, " ");
		int cont = 0, F = 0, M = 0, c = 0;
		int z = 0;
		while(p) {
			if (cont % 2 == 0) {
				strcpy(calcados[z].numero, p);
			}
			else {
				strcpy(calcados[z++].genero, p);
			}
			p = strtok(NULL, " ");
			cont++;
		}

		for (int i = 0;i < z;i++) {
			if (strcmp(calcados[i].numero, numero) == 0) {
				c++;
				if (strcmp(calcados[i].genero, "F") == 0)
					F++;
				else if (strcmp(calcados[i].genero, "M") == 0)
					M++;
			}
		}
		
		printf("Caso %d:\n", caso++);
		printf("Pares Iguais: %d\n", c);
		printf("F: %d\n", F);
		printf("M: %d\n", M);
		if (scanf(" %[^\n]",numero) != EOF) {
			scanf(" %[^\n]", entrada);
			printf("\n");
		}	
		else
			break;
	}
    return 0;
}
