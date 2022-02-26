#include<cstdio>

using namespace std;

int conta_digitos (int N) {
	int cont = 0;
	while(N != 0) {
		cont++;
		N /= 10;
	}
	return cont;
}

int main() {
	int P,i, result = 0;
	scanf("%d",&P);
	for	(int i = 1;i <= P;i++)
		result += conta_digitos(i);
	printf("%d\n", result);
    return 0;
}
