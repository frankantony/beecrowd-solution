#include<cstdio>

using namespace std;

void calcula (int M, int N) {

	for (int i = N+1;i < M;i++) {
		if (i % 5 == 2 || i % 5 == 3)
			printf("%d\n",i);
	}
	
}

int main() {
	int  M, N;
	scanf("%d%d",&M,&N);
	if (N <= M)
		calcula(M,N);
	else
		calcula(N,M);
    return 0;
}
