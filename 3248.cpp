#include<cstdio>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	int vet[N];
	for (int i = 0;i < N;i++) 
			scanf("%d",&vet[i]);
	int count = 0;
	for (int i = 0;i < N-2;i++)
		if (vet[i]  > vet[i+1] || vet[i+1]  > vet[i+2] || vet[i] > vet[i+2])
			count++;

	printf("%d\n", count);
    return 0;
}

