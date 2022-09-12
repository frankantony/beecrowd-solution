#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	char entrada[101];
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

