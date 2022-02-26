#include <stdio.h>

int main() {
	int N,i;
//	scanf("%d",&N);
	while(scanf("%d",&N) != EOF && N != 0) {
		int v[51],result[51],copia[51];
		int aux = N-1,c = 0;
		for (i = 0; i < N; i++)
			v[i] = N-i;

		result[c++] = v[aux];
		while(aux != 0)	{
			for(i = 0;i <= aux;i++)
				copia[i] = v[i];
			for(i = 0;i <= aux;i++){
				v[i+1] = copia[i];
			}
			v[0] = v[aux];

			result[c++] = v[aux-1];
			aux--;
		}

		printf("Discarded cards: ");
		for(i = 0;i < c-2; i++) {
			printf("%d, ", result[i]);
		}
		printf("%d\n",result[c-2]);
		printf("Remaining card: %d\n", result[c-1]);
	}

    return 0;
}
