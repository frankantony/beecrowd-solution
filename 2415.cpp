#include <cstdio>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	long int vet[N];
	for (int i = 0;i < N;i++)
		scanf("%ld",&vet[i]);
	long int cont = 1, max = 1;
	for (int i = 0;i < N-1;i++) {
		if (vet[i] == vet[i+1]) 
			cont++;
		if (vet[i] != vet[i+1] || i == N-2) {		
			if (max < cont)
				max = cont;
			cont = 1;
		}
	}
	printf("%ld\n", max);
	
    return 0;
}

