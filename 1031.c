#include <stdio.h>

/*	arvore = insere (50,arvore);
	arvore = insere (30,arvore);
	arvore = insere (20,arvore);
	arvore = insere (40,arvore);
	arvore = insere (70, arvore);
	arvore = insere (60, arvore);
	arvore = insere (80, arvore);
	
	remove (20,arvore);
	remove (30,arvore);
	
	prefixa(arvore);
*/

/*int ultimo_a_desligar (int N, int m) {
	int i,j = 2, cont = 0,z = 0, valor;
	int v[N+1];
	for (i = 0;i <= N;i++)
		v[i] = 0;
	v[1] = 1;
	while (cont < N-1) {
		if (v[j] == 0)
			z++;
		if (z == m) {
			v[j] = 1;
			cont++;
			valor = j;
			z = 0;
		}
//		if (j == N) j = 2;
//		else j = j+1;
		j = (j + 1) % N;
	}
	return valor;
}
*/

/*	char caracteres[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	int i;
	char c;
	while(scanf("%c",&c) != EOF) {
		for (i = 0;i < 48; i++) {
			if (c == caracteres[i]){
				printf("%c",caracteres[i-1]);
				break;
			}
			else if (caracteres[i] == ' ' || caracteres[i] == '\n') {
				printf("%c", caracteres[i]);
				break;
			}
		}
	}

    return 0;
}
*/

int ultimo_a_desligar (int N, int M) {
	int result = 1,i;
	for (i = 1;i <= M;i++) 
		result = (result + M) % i;
	return result;
}

int main() {
	int N,i;
	printf("result = %d\n",ultimo_a_desligar(17,7));
	while(1) {
		if (N == 0) break;
		scanf("%d",&N);
		for (i = 1; 1;i++) {
			if (ultimo_a_desligar(N,i) == 13) {
				printf("%d\n",i);
				break;
			}
		}
	
	}	

    return 0;
}
