#include <cstdio>
 
using namespace std;

int main() {
    int N,X;
	scanf("%d",&N);
	while (N >= 1) {
		scanf("%d",&X);
		unsigned long long int c = 1, soma = 0;
		for (int i = 0;i < X;i++) {
			soma += c;
			c *= 2;
		}
		soma = (soma/12)/1000;
		printf("%lld kg\n", soma);
		N--;
	}

    return 0;
}
