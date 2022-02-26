#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	
	int N, D;
	while(true) {
		scanf("%d%d",&N,&D);
		if (N == 0 && D == 0)
			break;
		char entrada[N+1], pilha[N+1];
		scanf(" %s", entrada);
		int tam = strlen(entrada), numero, i = 0;
		int topo = -1;
		while (D > 0) {
			if (topo == -1)
				pilha[++topo] = entrada[i++];

			if (pilha[topo] < entrada[i]) {
				topo--;
				D--;
			}
			else {
				pilha[++topo] = entrada[i++];
				if (i == N) {
					while (D > 0){
						topo--;
						D--;
					}
				}
			}
		}

		for (int z = i; z < N; z++)
			pilha[++topo] = entrada[z];
		pilha[topo+1] = '\0';
		printf("%s\n", pilha);
	}
    return 0;
}
