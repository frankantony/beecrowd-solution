#include<bits/stdc++.h>

using namespace std;

int verifica (char *a, char *b) {
	int cont = 0;
	for (int i = 0;i < strlen(a);i++) {
		if (a[i] != b[i]) cont++;
	}
	return cont <= 1;

}

int main() {
	int N,i;
	scanf("%d",&N);
	char s[5];
	while (N >= 1) {
		scanf("%s",s);
		int tam_s = strlen(s);
		char one[] = "one", two[] = "two";
		if (tam_s == 5)
			printf("3\n");
		else if (verifica(s,one))
			printf("1\n");
			
		else if (verifica(s,two)) 
			printf("2\n");

		N--;
	}

    return 0;
}
