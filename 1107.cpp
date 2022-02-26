#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	
	int A,C,X;
	while(1) {
		scanf("%d%d",&A,&C);
		if (A == 0 && C == 0) break;
		int vetor[C];
		for (int i = 0; i < C;i++) {
			scanf("%d",&vetor[i]);
		}

		int soma = A - vetor[0];
		for (int i = 0;i < C-1; i++) {
			if (vetor[i] > vetor[i+1])
				soma += vetor[i] - vetor[i+1];
		}
		printf("%d\n",soma);
	}
    return 0;
}
