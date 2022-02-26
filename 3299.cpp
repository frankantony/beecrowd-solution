#include<cstdio>
#include<cstring>

using namespace std;

bool verifica (char *a, char* b) {
	int tam_a = strlen(a), tam_b = strlen(b);
	if (tam_a >= tam_b) return true;
	return false;
}

int main() {
	char entrada1[1001], entrada2[1001];
	scanf(" %[^\n]", entrada1);
	scanf(" %[^\n]", entrada2);
	if (verifica(entrada1, entrada2))
		printf("go\n");
	else
		printf("no\n");

    return 0;
}

