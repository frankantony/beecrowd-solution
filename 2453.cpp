#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char entrada[1001];
	scanf(" %[^\n]", entrada);

	int tam = strlen(entrada);
	int cont = 0, resultado = 1;

	for (int i = 0;i < tam;i++) {
		if (entrada[i] == ' ') {
			printf(" ");
			if (resultado)
				resultado = 0;
			else
				resultado = 1;
		}
		else if (i % 2 == resultado)
			printf("%c",entrada[i]);
		
	}
	printf("\n");
    return 0;
}
