#include<cstdio>

using namespace std;

void calcula (int M, int N) {
	int soma = 0;
	for (int i = N;i <= M;i++) {
		soma += i;
		printf("%d ",i);
	}
	printf("Sum=%d\n",soma);
}

int main() {
	int  M, N;
	while(1) {

		scanf("%d%d",&M,&N);
		if (M <= 0 || N <= 0) break;
		int soma = 0;
		if (N <= M)
			calcula (M, N);
		else
			calcula (N, M);		

	}

    return 0;
}
