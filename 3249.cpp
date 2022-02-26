#include <cstdio>
#include <cstring>

using namespace std;

bool verifica (char* a) {
	int tam = strlen(a);
	for (int i = 0;i < tam-1;i++) 
		if (a[i] == 'C' && a[i+1] == 'D')
			return false;
	return true;
}

int main() {
	char entrada[1001];
	int N, cont = 0;
	scanf("%d",&N);
	for (int i = 0;i < N;i++) {
		scanf(" %[^\n]", entrada);
		if (verifica(entrada))
			cont++;
	}
	printf("%d\n",cont);
    return 0;
}
