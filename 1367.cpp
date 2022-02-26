#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	int N, T;
	char problema;
	char resultado[20];
	while(1) {
		scanf("%d",&N);
		int incorreto[26];
		bool mapa[26];
		for (int i = 0;i < 26;i++) {
			incorreto[i] = 0;
			mapa[i] = false;
		}
		if (N == 0) break;
		int tempo = 0, tempo_incorrect = 0;
		int contador = 0;
		for (int i = 0;i < N;i++) {
			scanf(" %c%d %s", &problema, &T, resultado);
			
			if (strcmp (resultado, "incorrect") == 0) {
				incorreto[problema-'A']++;
			}
			if (strcmp(resultado, "correct") == 0) {
				if (!mapa[problema-'A']) {
					contador++;
					tempo += T;
					tempo = tempo + (incorreto[problema-'A'] * 20);
					mapa[problema-'A'] = true;
				}
			}
		}
		printf("%d %d\n", contador, tempo);
	}
    return 0;
}
