#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {

	char entrada[1001];
	while(scanf(" %[^\n]",entrada) != EOF) {
		int tam = strlen(entrada), cont = 1, resultado = 0;
		sort(entrada, entrada + tam);

		for (int i = 0; i < tam-1;i++) {
			if (entrada[i] == entrada[i+1]) {
				cont++;
			}
			else {
				resultado += (cont % 2);
				cont = 1;
			}
		}
		if (resultado != 0)
			printf("%d\n", (resultado-1));
		else
			printf("%d\n", resultado);
	}
    return 0;
}
