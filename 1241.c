#include<stdio.h>
#include<string.h>

int encaixa (char *s1,char *s2) {
	int tam_s1 = strlen(s1), tam_s2 = strlen(s2);
	int i = tam_s1-1,j = tam_s2-1;
	if (tam_s2 > tam_s1) return 0;
	while (i >= 0 && j >= 0) {
		if (s1[i] != s2[j])	
			return 0;
		i--;
		j--;
	}
	return 1;
}

int main() {
	char string1[1001],string2[1001];
	int N;
	scanf("%d",&N);
	while(N >= 1) {
		scanf("%s%s",string1,string2);
		if (encaixa(string1,string2))
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
		N--;
	}
    return 0;
}
