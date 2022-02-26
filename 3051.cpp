#include <cstdio>
#include<map>
#include<iostream>

using namespace std;

int main() {
	int N, M, K, soma = 0, cont = 0;
	scanf("%d%d",&N,&K);
	int vet[N];
	for (int i = 0; i < N; i++) 
		scanf("%d",&vet[i]);

	map<int, int> mapa;
	mapa[0] = 1;
	for (int i = 0;i < N;i++) {
		soma += vet[i];
//		soma = soma;
		if (mapa.find(soma-K) != mapa.end())
			cont += mapa[soma];
		if (mapa.find(soma) == mapa.end())
			mapa[soma] = 1;
		else
			mapa[soma] = mapa[soma] + 1;
	}
	for(map<int, int>::iterator it = mapa.begin(); it != mapa.end(); ++it)
	{
		cout << it->first << " "// << it->second.first << " " << it->second.second << "\n"
		 << " " << it-> second << "\n";
	}
	printf("%d\n", cont);
    return 0;
}

