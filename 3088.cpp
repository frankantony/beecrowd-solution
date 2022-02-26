#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	char entrada[1000];
	while(scanf(" %[^\n]",entrada) != EOF) {
		int tam = strlen(entrada);
		entrada[tam] = '#';
		for (int i = 0;i < tam;i++) {
			if (!(entrada[i] == ' ' && (entrada[i+1] == ',' || entrada[i+1] == '.')))
				printf("%c", entrada[i]);
		}
		printf("\n");
	}

    return 0;
}

