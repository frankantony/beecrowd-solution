#include<cstdio>
#include<cstring>

using namespace std;

int main() {

	char entrada[1001];
	int casos;
	scanf("%d", &casos);
	while(casos >= 1) {
		scanf(" %[^\n]",entrada);
		int tam = strlen(entrada), resultado = 1;
		
		for (int i = 0; i < tam; i++) {
			if (entrada[i] == 'A' || entrada[i] == 'E' || entrada[i] == 'I' || entrada[i] == 'O' || entrada[i] == 'S'
			 || entrada[i] == 'a' || entrada[i] == 'e' || entrada[i] == 'i' || entrada[i] == 'o' || entrada[i] == 's') 
				resultado *= 3;
			else 
				resultado *= 2;
		}
		printf("%d\n", resultado);
		casos--;
	}
    return 0;
}
