#include<bits/stdc++.h>

using namespace std;

int main() {
	int N,i;

	while (1) {
		
		scanf("%d",&N);
		if (N == 0) break;
		string nomes[N];
		
		for (i = 0;i < N;i++)
			cin >> nomes[i];

		int v[52], j = 0, aux_N = N, cont, guarda_aux_N;
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
			int tamanho = 0;
			cout << "Nomes: \n";
			printf("aux_N = %d\n",aux_N);
			for (i = 0; i < aux_N; i++) {
				printf("i = %d\n",i);
				if (nomes[i] != "") {
					nomes[tamanho++] = nomes[i];
					cout << nomes[i] << " ";
				}
			}
			guarda_aux_N = aux_N;
			cout << "\n";
			printf("Menor: %d\n",menor);
			for (i = j;i < aux_N + j;i++) {
				if (v[i] == menor) {
					printf("i-j = %d\n",(i-j));
					nomes[i-j] = "";
				}
			}
			j += aux_N;
			aux_N -= cont;
		}
		printf("Elementos:\n");
		int primeira_vez = 1;
		for (i = 0;i < guarda_aux_N;i++) {
			if (nomes[i] != "") {
				if(primeira_vez) {
					cout << nomes[i];
					primeira_vez = 0;
				}
				else
					cout << " " << nomes[i];
			}
		}
		cout << "\n";
	}


    return 0;
}


