#include<cstdio>

using namespace std;

int main() {
	int N, K, M, cont;
	while(true) {
		scanf("%d%d%d",&N,&K,&M);
		if (N == 0 && K == 0 && M == 0)
			break;
		bool usado[N];
		for (int i = 0;i < N;i++)
			usado[i] = false;
		int horario = K-1, anti = N-M, z = 0, z1 = 0;
		if(N == 1) {
			printf("  %d", N);
		}
		else {
			if (horario + 1 <= 9)
				printf("  %d", horario+1);
			else
				printf(" %d",horario+1);

			if (anti + 1 <= 9)
				printf("  %d,", anti+1);
			else
				printf(" %d,",anti+1);
		}
		usado[horario] = true;
		usado[anti] = true;

		cont = 2;
		while (cont < N) {
			if (cont % 2 == 0) {
				horario = (horario + 1) % N;

				if (!usado[horario]) {
					z++;
				}

				if (z == K) {
					if (horario+1 <= 9)
						printf("  %d", horario+1);
					else
						printf(" %d", horario + 1);
					usado[horario] = true;
					cont++;
					z = 0;
				}
			}
			else {
				if (anti == 0)
					anti = N-1;
				else
					anti--;
				
				if (!usado[anti]) {
					z1++;
				}

				if (z1 == M) {
					if(anti+1 <= 9)
						printf("  %d,", anti+1);
					else
						printf(" %d,", anti + 1);
					usado[anti] = true;
					cont++;
					z1 = 0;
				}

			}
		}
		printf("\n");
	}
	return 0;
}
