#include<bits/stdc++.h>

using namespace std;

int e_primo (int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) 
			return 0;
	}
	return 1;
}

int main() {
	int N,i, cont = 0, result = 0;
	scanf("%d",&N);
	for (i = N; cont < 10; i++) {
		if (e_primo(i)) {
			result += i;
			cont++;
		}
	}
	printf("%d km/h\n", result);
	int tempo_hora = 60000000/result;
	int tempo_dia = tempo_hora/24;
	printf("%d h / %d d\n", tempo_hora, tempo_dia);
    return 0;
}
