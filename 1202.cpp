#include<cstdio>
#include<cstring>

using namespace std;
 
int fibonnacci(int N) {
	int fib[N+1];
	fib[1] = 1; fib[2] = 1;
	for (int i = 3;i <= N;i++) {
		fib[i] = (fib[i-1] + fib[i-2]);
		fib[i] %= 1000;
	}
	return fib[N];
}

int main() {
	int casos;
	scanf("%d",&casos);
	char entrada[10001];

	while(casos >= 1) {
		scanf(" %s", entrada);
		int tam = strlen(entrada),resultado = 0;
		for(int i = 0;i < tam;i++) {
			resultado *= 2;
			resultado += (entrada[i]-'0');
			resultado %= 1500;
		}
		int f = fibonnacci(resultado);
		printf("%03d\n", f);
		casos--;
	}
 
    return 0;
}
