#include<cstring>
#include<cstdio>

using namespace std;

struct Nomes{
	char nome[60];
};

int main() {
	int N;
	scanf("%d",&N);
	while(1) {
		Nomes nomes[N];
		int max = 0, tamanho;
		for (int i = 0;i < N;i++) {
			scanf(" %[^\n]",nomes[i].nome);
			tamanho = strlen(nomes[i].nome);
			if (max < tamanho)
				max = tamanho;
		}
		for (int i = 0;i < N;i++) {
			tamanho  = strlen(nomes[i].nome);
			for (int j = 0; j < max - tamanho;j++)
				printf(" ");
			printf("%s\n",nomes[i].nome);
		}
		scanf("%d",&N);
		if (N == 0) break;
		else printf("\n");
	}
    return 0;
}
