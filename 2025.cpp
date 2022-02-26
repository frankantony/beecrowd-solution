#include<cstdio>
#include<cstring>

using namespace std;

bool verifica (char *a) {
	char vet[] = "Joulupukki";
	int tam = strlen(a), s = tam;
	if (tam != 10 && a[tam-1] != '.') 
		return false;
	if (a[tam-1] == '.')
		s = tam-1;
	for (int i = 1;i < s-1;i++)
		if(a[i] != vet[i])
			return false;

	return true;
}

int main() {

	char entrada[1001];
	int casos;

	scanf("%d", &casos);
	while(casos >= 1) {
		scanf(" %[^\n]",entrada);
		int tam = strlen(entrada), resultado = 1;
		
		char *t = strtok(entrada, " ");
		int tam_t = strlen(t);
		if (verifica(t)) {
			if (t[tam_t-1] == '.')
				printf("Joulupukki.");
			else
				printf("Joulupukki");
		}
		else
			printf("%s",t);
		t = strtok(NULL, " ");
		while(t) {
			printf(" ");
			tam = strlen(t);
			if (verifica(t)) {
				if (t[tam-1] == '.')
					printf("Joulupukki.");
				else
					printf("Joulupukki");
			}
			else
				printf("%s",t);
			t = strtok(NULL, " ");
		}
		printf("\n");
		casos--;
	}
    return 0;
}
