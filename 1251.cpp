#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Vetor {
	char c;
	int frequencia;
};

bool compara (Vetor a, Vetor b) {
	if (a.frequencia != b.frequencia)
		return a.frequencia < b.frequencia;
	if (a.c != b.c)
		return a.c > b.c;
	return 0;
}

int main() {
	char A[1005];
	scanf(" %[^\n]", A);
	while (true) {
		Vetor vetor[96];
		for(int i = 0; i < 96; i++) {
			vetor[i].c = i + 32;
			vetor[i].frequencia = 0;
		}
		int tam = strlen(A);
		for(int i = 0;i < tam;i++) { 
			vetor[A[i]-32].frequencia++;
		}

		sort(vetor, vetor + 96, compara);
		
		for (int i = 0; i < 96; i++)
			if (vetor[i].frequencia)
				printf("%d %d\n", vetor[i].c, vetor[i].frequencia);
		if (scanf(" %[^\n]", A) == EOF)
			break;
		else
			printf("\n");
	}
    return 0;
}
