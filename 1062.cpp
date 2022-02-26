#include<bits/stdc++.h>

using namespace std;

bool verifica (int N, int *e, int *s) {
	stack<char> pilha;
	int i = 0, j = 0;
	while (1) {
		if (!pilha.empty() && j < N && pilha.top() == s[j]) {
				pilha.pop();
				j++;
		}
		else if (i < N) {
			pilha.push(e[i]);
				i++;
		}
		else 
			break;
	}
	return pilha.empty();
}

int main() {
	int N,i,j;
	while(1) {
		scanf("%d",&N);
		if (N == 0) break;
		int vet[N];
		for (int i = 0;i < N;i++)
			vet[i] = i+1;
		while(true) {
			int e[N], i;
			for (i = 0;i < N;i++) {
				scanf("%d",&e[i]);
				if (e[i] == 0) 
					break;
			}
			if (i < N) break;

			bool result = verifica(N, vet, e);
			if(result)
				printf("Yes\n");
			else
				printf("No\n");
		}		
		printf("\n");
	}
 
    return 0;
}
