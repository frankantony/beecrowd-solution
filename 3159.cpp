#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	int minuto, N, p = 0, tempo, hora;
	char entrada[200];
	scanf("%d",&N);
	for(int i = 0; i < N;i++) {
		scanf(" %[^\n]", entrada);
		int tam = strlen(entrada);
		char ultimo = '.';
		
		for (int j = 0; j < tam;j++) {
			if (entrada[j] >= 'A' && entrada[j] <= 'Z') {
				printf("#");
				ultimo = '#';
				entrada[j] = entrada[j] + 32;
			}
			if (entrada[j] >= 'a' && entrada[j] <= 'c') { // Numero 2 {'a'...'c'}
				int valor = entrada[j] - 'a' + 1;
				if (ultimo == '2')
					printf("*");
				for(int y = 0; y < valor; y++)
					printf("2");
					ultimo = '2';
			}
			if (entrada[j] >= 'd' && entrada[j] <= 'f') { // Numero 3 {'d'...'f'}
				int valor = entrada[j] - 'd' + 1;
				if (ultimo == '3')
					printf("*");
				for(int y = 0; y < valor; y++)
					printf("3");
					ultimo = '3';
			}
			if (entrada[j] >= 'g' && entrada[j] <= 'i') {
				int valor = entrada[j] - 'g' + 1;
				if (ultimo == '4')
					printf("*");
				for(int y = 0; y < valor; y++)
					printf("4");
					ultimo = '4';
			}
			if (entrada[j] >= 'j' && entrada[j] <= 'l') {
				int valor = entrada[j] - 'j' + 1;
				if (ultimo == '5')
					printf("*");
				for(int y = 0; y < valor; y++)
					printf("5");
					ultimo = '5';
			}
			if (entrada[j] >= 'm' && entrada[j] <= 'o') {
				int valor = entrada[j] - 'm' + 1;
				if (ultimo == '6')
					printf("*");
				for(int y = 0; y < valor; y++)
					printf("6");
					ultimo = '6';
			}
			if (entrada[j] >= 'p' && entrada[j] <= 's') {
				int valor = entrada[j] - 'p' + 1;
				if (ultimo == '7')
					printf("*");
				for(int y = 0; y < valor; y++)
					printf("7");
					ultimo = '7';
			}
			if (entrada[j] >= 't' && entrada[j] <= 'v') {
				int valor = entrada[j] - 't' + 1;
				if (ultimo == '8') 
					printf("*");

				for(int y = 0; y < valor; y++)
					printf("8");
					ultimo = '8';
			}
			if (entrada[j] >= 'w' && entrada[j] <= 'z') {
				int valor = entrada[j] - 'w' + 1;
				if (ultimo == '9')
					printf("*");
				for(int y = 0; y < valor; y++)
					printf("9");
					ultimo = '9';
			}
			if (entrada[j] == ' ') {
				ultimo = '0';
				printf("0");
			}
		}
		printf("\n");
	}
    return 0;
}

