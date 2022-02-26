#include <cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

void troca (char* a, char* b) {
	char t = *a;
	*a = *b;
	*b = t;
}

void reverso (char *str, int l, int h) {
    while (l < h) {
        troca (&str[l], &str[h]);
        l++;
        h--;
    }
}

int encontraIndice (char *str, char caractere, int l, int h) {
	int indice = l;

	for (int i = l+1; i <= h; i++)
	if (str[i] > caractere && str[i] < str[indice])
			indice = i;

	return indice;
}

void permuta (char *str) {
    int tam = strlen(str);
 
    sort (str, str + tam);
 
    bool terminou = false;
    while (!terminou) {
		printf("%s\n", str);

		// encontra o maior caractere que é menor 
		// do que o caractere posterior.
        int i;
        for (i = tam - 2; i >= 0; --i)
	        if (str[i] < str[i+1])
	            break;
		
		// Significa que todos os caracteres  de str estão ordenados
		// decrescentemente, então já foram processadas todas as permutações
		// crescentes.
 
        if (i == -1)
            terminou = true;
        else {
            int indice = encontraIndice (str, str[i], i + 1, tam - 1);
 
			troca (&str[i], &str[indice]);

            reverso (str, i + 1, tam - 1);
        }
    }
}

int main()
{
	int N;
	scanf("%d",&N);
	getchar();
	char entrada[20];
	while(N >= 1) {
		scanf(" %[^\n]", entrada);
		permuta (entrada);
		printf("\n");
		N--;
	}
	return 0;
}


