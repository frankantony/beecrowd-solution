#include<cstdio>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	int vet[N], soma[N];
	for (int i = 0;i < N;i++) 
		scanf("%d",&vet[i]);
	soma[0] = vet[0];
	for (int i = 1;i < N;i++) {
		soma[i] = vet[i];
		if (soma[i-1] >= 0) 
			soma[i] = soma[i-1] + soma[i];
	}
	for (int i = 0;i < N;i++)
		printf("%d ",soma[i]);
	printf("\n");
	int max = soma[0];
	for (int i = 1;i < N;i++)
		if (max < soma[i])
			max = soma[i];
	
 	printf("%d\n",max);
    return 0;
}
