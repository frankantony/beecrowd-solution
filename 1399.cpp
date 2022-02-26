#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m, u, i, j, k;

	scanf("%d%d%d",&n,&m,&u);
	long long int A[1000000];
	for (i = 1; i <= n;i++)
		scanf("%lld",&A[i]);
	int L,R,v,p;
	for (i = 0;i < m;i++) {
		scanf("%d%d%d%d",&L,&R,&v,&p);
		k = 0;
		for (j = L;j <= R;j++) {
			if (A[j] < v)
				k++;
		}
		long long int numerador = u*k;
		long long int denominador = R-L+1;
		A[p] = numerador/denominador;
	}

	for (i = 1;i <= n;i++)
		printf("%lld\n",A[i]);


return 0;
}
