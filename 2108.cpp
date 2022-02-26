#include<cstdio>
#include<cstring>

int main() {
	int maior = 0;

	char palavra_maior[101], entrada[101];
	while(true) {
		scanf(" %[^\n]",entrada);
		if (strcmp(entrada, "0") == 0) {
			printf("\nThe biggest word: %s\n",palavra_maior);
			break;
		}
		char *p = strtok(entrada, " ");

		int primeira_vez = 1, tam;
		while(p) {
			tam = strlen(p);
			if (primeira_vez) {
				printf("%d", tam);
				primeira_vez = 0;
			}
			else
				printf("-%d", tam);
			if (maior <= tam) {
				strcpy(palavra_maior, p);
				maior = tam;
			}
			p = strtok(NULL, " ");
		}
		printf("\n");
	}
    return 0;
}
