#include <cstdio>
#include<string>
#include<algorithm>

struct Chinelo
{
    int numero;
    char pe;

};

bool compara (Chinelo a, Chinelo b) {
	if (a.numero != b.numero)
		return a.numero > b.numero;
}

using namespace std;

int main() {
	int N;
	while(scanf("%d",&N) != EOF) {
		Chinelo chinelo[N+1];
		chinelo[N].numero = -1;
		chinelo[N].pe = 'A';
		for (int i = 0;i < N;i++)
			scanf("%d %c",&chinelo[i].numero,&chinelo[i].pe);
		sort(chinelo, chinelo + N, compara);
		
		int c = chinelo[0].numero, cont_E = 0,cont_D = 0, soma = 0;
		for (int i = 0; i <= N; i++) {
			if (c != chinelo[i].numero) {
				if (cont_E < cont_D)
					soma += cont_E;
				else
					soma += cont_D;
				cont_E = 0;
				cont_D = 0;
				c = chinelo[i].numero;
			}
	
			if (chinelo[i].pe == 'E')
				cont_E++;
			if (chinelo[i].pe == 'D')
				cont_D++;
		}

			printf("%d\n",soma);
	}

	return 0;
}

