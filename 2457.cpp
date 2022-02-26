#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char entrada[1001], c;
	scanf(" %c",&c);
	scanf(" %[^\n]", entrada);

	int tam = strlen(entrada);
	int palavras = 1, caractere = 0;
	bool tem = false;
	for (int i = 0;i < tam;i++) {
		if (entrada[i] == ' ') {
			if (tem)
				caractere++;
			palavras++;
			tem = false;
		}
		if (entrada[i] == c)
			tem = true;
	}
	if (tem)
		caractere++;

	float result = caractere*100.0/palavras;
	printf("%.1f\n",result);
    return 0;
}
