#include<cstdio>

using namespace std;

int main() {
	int N;
	while(1) {
		scanf("%d",&N);
		if(N == 0)
			break;
		int  vet[N];
		for (int i = 0;i < N;i++)
			scanf("%d",&vet[i]);
		int cont = 0;
/*		if (vet[0] == 0 && vet[1] == 0) {
			if (vet[N-1] == 0)
				vet[0] = 1;
			else
				vet[1] = 1;
			cont++;
		}
*/
		for (int i = 0;i < N-1;i++) {
			if (vet[i] == 0 && vet[i+1] == 0) {
				cont++;
//				if (vet[(i+2)%N] == 0)
					vet[i+1] = 1;
//				else
//					vet[i] = 1;
			}
		}
/*		if (vet[N-1] == 0 && vet[0] == 0) {
			cont++;
			vet[0] = 1;
		}
*/
		printf("%d\n",cont);
	}
    return 0;
}
