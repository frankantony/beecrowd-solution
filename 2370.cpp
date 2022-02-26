#include<bits/stdc++.h>

using namespace std;

struct Estrutura {
	char nome[100];
	int habilidade;
};

struct Torneios {
	vector<string> nomes;
};

bool compara (Estrutura a, Estrutura b) {
	return a.habilidade > b.habilidade;
}

int main() {
	int N, T;
	scanf("%d%d",&N,&T);
	Estrutura estrutura[N];
	Torneios torneios[T];
	for (int i = 0;i < N;i++)
		scanf(" %s%d",estrutura[i].nome, &estrutura[i].habilidade);
	sort(estrutura, estrutura + N, compara);
	int t = 0;
	for (int i = 0;i < N;i++) {
		torneios[t].nomes.push_back(estrutura[i].nome);
		t = (t+1) % T;
	}
	for (int i = 0;i < T;i++) {
		printf("Time %d\n",i+1);
		sort(torneios[i].nomes.begin(),torneios[i].nomes.end());
		for (int j = 0;j < torneios[i].nomes.size();j++)
			cout << (torneios[i].nomes)[j] << "\n";
		cout << "\n";
	}
	
    return 0;
}

/*
14 3
felipe 4
alvaro 8
thiago 1
rodrigo 3
robson 2
fabio 9
ricardo 11
rodolfo 0
andre 14
arthur 12
ronaldo 55
rogerio 30
lucas 7
rafael 17
*/



