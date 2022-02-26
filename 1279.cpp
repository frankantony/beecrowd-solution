#include<cstdio>
#include<cstring>

using namespace std;

bool divisible_by (char *s, int divisor) {
	int k = 0, tam = strlen(s);
	for (int i  = 0;i < tam;i++) {
		k = ((s[i] -'0') + k* 10) % divisor;
	}
	return k == 0;
}

int main() {
	
	char entrada[3000];
	bool primeira = false;
	while(scanf("%s",entrada) != EOF) {
		if(primeira)
			printf("\n");
		primeira = true;
		bool divi_4 = divisible_by(entrada,4), divi_5 = divisible_by(entrada,5);
		bool divi_15= divisible_by(entrada,15), divi_100 = divisible_by(entrada,100);
		bool divi_400 = divisible_by(entrada, 400);
		bool divi_55 = divisible_by(entrada, 55);
		bool e_bissexto = (divi_4 && !divi_100) || (divi_400);
		bool e_buluculu = divi_55 && e_bissexto;
		if(e_bissexto)
			printf("This is leap year.\n");

		if(divi_15) 
			printf("This is huluculu festival year.\n");
		if(e_buluculu)
			printf("This is bulukulu festival year.\n");
		if(!e_bissexto && !divi_15 && !e_buluculu)
			printf("This is an ordinary year.\n");
	}
    return 0;
}
