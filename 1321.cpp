#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	
	int A, B, C, X, Y;
	while(true) {
		scanf("%d%d%d%d%d",&A,&B,&C,&X,&Y);
		if (A == 0 && B == 0 && C == 0 && X == 0 && Y == 0)
			break;
		int princesa[] = {A, B, C};
		sort(princesa, princesa + 3);

		int resultado = -1, principe_ganha, princesa_ganha;
		
		for (int carta = 1; carta <= 52; carta++) {
			if (carta != A && carta != B && carta != C && carta != X && carta != Y) {
				principe_ganha = 0, princesa_ganha = 0;

				int principe[] = {X, Y, carta};		
				sort(principe, principe + 3);
				
				if (princesa[0] > principe[2])
					princesa_ganha++;
				else
					principe_ganha++;

				if (princesa[2] > principe[1])
					princesa_ganha++;
				else
					principe_ganha++;

				if (princesa[1] > principe[0])
					princesa_ganha++;
				else
					principe_ganha++;

				if (principe_ganha >= 2) {
					resultado = carta;
					break;
				}
			}
		}
		printf("%d\n", resultado);
	}
    return 0;
}
