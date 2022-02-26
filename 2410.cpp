#include <cstdio>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	long int vet[N];
	long int frequencia[1000001];
	for (int i = 0;i < 1000001;i++)
		frequencia[i] = 0;
	long int cont = 0;
	for (int i = 0;i < N;i++) {
		scanf("%ld",&vet[i]);
		if (!frequencia[vet[i]]) {
			cont++;
			frequencia[vet[i]] = 1;
		}
	}
	printf("%ld\n", cont);
	
    return 0;
}

