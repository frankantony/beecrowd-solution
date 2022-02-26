#include<cstdio>

using namespace std;

int main() {
	
	int N, C;
	
	while(true) {
		int pontos_M = 0, pontos_L = 0, encontrou = 0, realizado = 0;
		scanf("%d",&N);
		if (N == 0)
			break;
		int M[N+1], L[N+1];
		M[N] = -100;
		L[N] = -100;
		for (int i = 0;i < N;i++) 
			scanf("%d", &M[i]);
		for (int i = 0;i < N;i++)
			scanf("%d", &L[i]);

		int cont_M = 0, cont_L = 0;
		for (int i = 0; i < N; i++) {
			pontos_M += M[i];
			pontos_L += L[i];

			// Calcula os pontos do Mark.
			if (M[i] == M[i+1]) 
				cont_M++;				
			else
				cont_M = 0;

			// Calcula os pontos do Leti.
			if (L[i] == L[i+1])
				cont_L++;
			else		
				cont_L = 0;

			if (cont_M == 2 && cont_L == 2) {
				cont_M = 0;
				cont_L = 0;
				realizado = 1;
			}

			else if (cont_M == 2) {
				if (!realizado) {
					pontos_M += 30;
					realizado = 1;
				}
				cont_M = 0;
			}
			else if (cont_L == 2) {
				if (!realizado) {
					pontos_L += 30;
					realizado = 1;
				}
				cont_L = 0;
			}

		}

		if (pontos_M > pontos_L)
			printf("M\n");
		else if (pontos_M < pontos_L)
			printf("L\n");
		else
			printf("T\n");
	}
    return 0;
}
