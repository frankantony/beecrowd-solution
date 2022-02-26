#include<cstdio>
#include<algorithm>
#include<string.h>

using namespace std;

int main() {
	int N,resto,z;
	char s1[100],s2[10];
	while (scanf("%s %s",s1,s2) != EOF) {
		N = strlen(s1);
		resto = N % 3;
		printf("$");
		for (int i = 0;i < resto;i++)
			printf("%c",s1[i]);
		if (N > 3 && resto != 0)
			printf(",");
		z = 0;
		for (int i = resto;i < N; ++i) {
			printf("%c",s1[i]);
			z++;
			if (z == 3 && i != N-1) {
				printf(",");
				z = 0;
			}
		}
		printf(".");
		if (strlen(s2) == 1)
			printf("0%s\n",s2);
		else
			printf("%s\n",s2);
	}

    return 0;
}


