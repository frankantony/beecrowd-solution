#include <cstdio>
#include<cstring>

using namespace std;

struct Ponto {
	int X, Y;
};

int mod (int x) {
	if (x >= 0)
		return x;
	return -x;
}

bool verifica_diagonal (int z, int inicio, int fim, int n, Ponto* v) {
	for (int j = 0;j < n;j++) {
		if (j != z)
			if (mod(v[j].X - inicio) == mod(v[j].Y - fim))
				return false;
	}
	return true;
}

int main() {
	int N,M, cont = 0;
	scanf("%d",&N);
	Ponto ponto[N];
	for (int i = 0; i < N; i++)
		scanf("%d%d",&ponto[i].X, &ponto[i].Y);
	for (int i = 0;i < N;i++) {
		if (verifica_diagonal(i, ponto[i].X, ponto[i].Y, N, ponto))
			cont++;
	}
	printf("%d\n", cont);
    return 0;
}
