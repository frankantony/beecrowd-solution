#include <cstdio>
#include <cstring>

using namespace std;

int mod_by (char *entrada, int divisor) {
	int k = 0;
	int tam = strlen(entrada);
	for (int i = 0;i < tam;i++)
		k = ((entrada[i] - '0') + k * 10) % divisor;
	return k;
}

int main() {
	char entrada[101];
	scanf("%s", entrada);
	printf("%d\n", mod_by (entrada,3));
    return 0;
}
