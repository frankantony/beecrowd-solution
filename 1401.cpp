#include<algorithm>
#include<cstring>
#include<cstdio>

using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	char entrada[20];
	while(N >= 1) {
		scanf(" %[^\n]", entrada);
		int tam = strlen(entrada);
		sort(entrada, entrada + tam);
		printf("%s\n", entrada);
		while(next_permutation(entrada, entrada + tam)) {
			printf("%s\n", entrada);
		}
		printf("\n");
		N--;
	}
 
    return 0;
}
