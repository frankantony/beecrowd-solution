#include <cstdio>
#include<cstring>

using namespace std;

int main() {
	int N,M;
	char entrada1[27],entrada2[10007];
	scanf("%s", entrada1);
	scanf("%s", entrada2);
	for (int i = 0;i < strlen(entrada2);i++){
		int indice = entrada2[i]  - 'a';
		printf("%c",entrada1[indice]);
	}
	printf("\n");
    return 0;
}
