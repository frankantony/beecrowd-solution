#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int A,B;
	while(true) {
		scanf("%d%d",&A,&B);
		if (A == 0 && B == 0) break;
		int M[A],N[B];
		for (int i = 0;i < A;i++)
			scanf("%d",&M[i]);
		for (int i = 0;i < B;i++)
			scanf("%d",&N[i]);
		sort(M,M+A);
		sort(N,N+B);
		int atacante = M[0], penultimo = N[1];
		if (atacante < penultimo)
			printf("Y\n");
		else		
			printf("N\n");
	}
    return 0;
}
