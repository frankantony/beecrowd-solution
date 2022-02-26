#include<bits/stdc++.h>

using namespace std;

bool primo (int N) {
	
	if (N < 2) return false;
	for (int i = 2; i*i <= N; i++)
		if (N % i == 0)
			return false;
	return true;
}

string transforma_string(int n)
{
	string resultado;
	while(n != 0) {
		char c = (n % 10) + '0';
		resultado.push_back(c);
		n= n / 10;
	}
	reverse(resultado.begin(), resultado.end());
	return resultado;
}

bool analisa (string nome) {
	int tam = nome.length();
	for (int i = 0;i < tam;i++) 
		if (!primo (nome[i] - '0'))
			return false;
	return true;
}

int main() {
	
	int N;
	string numero = "";
	
	while(scanf("%d",&N) != EOF) {
		string h = transforma_string(N);
		numero = numero + h;

		if (analisa(numero) && primo(N))
			printf("Super\n");
		else if (primo(N))
			printf("Primo\n");
		else
			printf("Nada\n");
		numero = "";
	}
    return 0;
}
