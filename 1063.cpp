#include<bits/stdc++.h>

using namespace std;

int main() {
	int N,i,j;
	while(1) {
		scanf("%d",&N);
		if (N == 0) break;
		char e[N+1], s[N+1];
		for (i = 0;i < N;i++)
			scanf(" %c",&e[i]);
		for (i = 0;i < N;i++)
			scanf(" %c",&s[i]);
		stack<char> pilha;
		i = 0; j = 0;
		while (1) {
			if (!pilha.empty() && j < N && pilha.top() == s[j]) {
				printf("R");
				pilha.pop();
				j++;
			}
			else if (i < N) {
				printf("I");
				pilha.push(e[i]);
				i++;
			}
			else 
				break;
		}
		if (!pilha.empty())
			printf(" Impossible\n");
		else
			printf("\n");
	}
 
    return 0;
}
