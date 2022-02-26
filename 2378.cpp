#include<cstdio>

using namespace std;

int main() {
	int N, C,S,E;
	scanf("%d%d",&N,&C);
	int valor = 0;
	bool excedeu = false;
	for (int i = 0; i < N;i++) {
		scanf("%d%d", &S, &E);
		valor += (E-S);
		if (valor > C)
			if (!excedeu)
				excedeu = true;
	}
	if (excedeu)
		printf("S\n");
	else
		printf("N\n");
    return 0;
}
