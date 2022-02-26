#include<cstdio>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	int vet[N];
	for (int i = 0;i < N;i++)
		scanf("%d",&vet[i]);
	int valor = vet[0], c = 1;
	for (int i = 1;i < N;i++){
		if (valor != vet[i]) {
			c++;
			valor = vet[i];
		}
	}
	printf("%d\n",c);
    return 0;
}
