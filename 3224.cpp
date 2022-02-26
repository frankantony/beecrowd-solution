#include<cstdio>
#include<cstring>

using namespace std;

bool verifica (char* a, char* b) {
	int tam_a = strlen(a), tam_b = strlen(b);
	
}

int main() {
	char entrada[20];
	scanf(" %[^\n]", entrada);
	bool encontrou = false;
	for (int i = 0;i < strlen(entrada)-1; i++) {
		if (entrada[i] == '1' && entrada[i+1] == '3') {
			encontrou = true;
			break;
		}
	}
	if (encontrou)
		printf("%s es de Mala Suerte\n", entrada);
	else
		printf("%s NO es de Mala Suerte\n", entrada);
    return 0;
}

