#include<bits/stdc++.h>

using namespace std;

int indice_valido (int* jogando, int N, int indice) {
	int j = 0, c = -1;
	while(j < N) {
		if (jogando[j] == 1) {
			c++;
			if (c == indice) return j;
		}
		j++;
	}
}

int main() {

	int N,i;
	char nome[20];
	while (1) {
		
		scanf("%d",&N);
		if (N == 0) break;
		vector <string> nomes;
		
		for (i = 0;i < N;i++) {
			scanf("%s",nome);
			nomes.push_back(nome);
		}
		
		int jogando[N];
		for (i = 0;i < N;i++)
			jogando[i] = 1;
		int v[52], j = 0, aux_N = N, cont;
		for (i = 0;i < 52;i++)
			scanf("%d",&v[i]);
		while (1) {

			if (aux_N + j > 52) break;

			int menor = v[j];
			for (i = j; i < aux_N + j; i++) {
				if (menor >= v[i])
					menor = v[i];
			}
			cont = 0;
			for (i = j; i < aux_N + j; i++) {
				if (v[i] == menor)
					cont++;
			}
			if (aux_N - cont == 0)
				break;
			int indices[N],p = 0;
			for (i = j;i < aux_N + j;i++) {
				if (v[i] == menor) {
					int y = (i-j);
					int indice_val = indice_valido(jogando,N,y);
					indices[p++] = indice_val;
				}
			}
			
			for (i = 0;i < p;i++)
				jogando[indices[i]] = 0;

			j += aux_N;
			aux_N -= cont;
		}
		int primeira_vez = 1;
		for (i = 0;i < N;i++) {
			if(jogando[i]) {
				cout << nomes[i] << " ";
			}
		}
		cout << "\n";
	}
    return 0;
}

