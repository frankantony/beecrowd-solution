#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {
	char entrada[1024*1024];
	int N;
	scanf("%d",&N);
	while(N) {
		scanf(" %[^\n]", entrada);
		int tam = strlen(entrada);
		sort(entrada,entrada+tam);
		int i = 0;
		while (i < tam && entrada[i] =='0')
			i++;
		if (entrada[0] == '0' && i < tam) {
			char aux = entrada[0];
			entrada[0] = entrada[i];
			entrada[i] = aux;
		}
		printf("%s\n",entrada);
		N--;
	}
    return 0;
}

