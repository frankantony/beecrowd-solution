#include <cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	int vet[N+1];
	for (int i = 0;i < N;i++)
		scanf("%d",&vet[i]);
	sort(vet,vet+N);
	vet[N] = -1121;
	int mais_frequente = vet[0], maior_frequencia = 0, cont = 1;
	for (int i = 0; i < N; i++) {
		if(vet[i] == vet[i+1]) {			
			cont++;
		}
		else {
			if (cont >= maior_frequencia) {
				maior_frequencia = cont;
				mais_frequente = vet[i];
			}
			cont = 1;
		}		
	}
	
	printf("%d\n",mais_frequente);
    return 0;
}
