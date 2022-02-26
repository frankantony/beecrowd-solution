#include<bits/stdc++.h>

using namespace std;

int main() {
	int N,casos;
	scanf("%d",&casos);
	while(casos >= 1) {
		scanf("%d",&N);
		int valor = pow(2,N)-1;
		printf("%d\n", valor);
		casos--;
	}
    return 0;
}
