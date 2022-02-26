#include <stdio.h>
#include<string.h>
#include<math.h>

long int converte_binario_decimal (char *c) {
	int n = strlen(c),i,cont = 0;
	long int soma = 0;
	
	for (i = n-1;i >= 0;i--){
		soma += (int)(c[i]-'0')*pow(2,cont++);
	}
	return soma;
}

void converte_decimal_binario (char *c) {
	int z = 0,i,x = 0;
	long int n = 0;
	for (i = strlen(c)-1; i >= 0 ;i--)
		n += (int) (c[i]-'0')* pow(10,x++);
	long int aux[1000];
	while(n != 0){
		aux[z++] = n % 2;
		n = n / 2;
	}
	for (i = z-1; i>= 0;i--)
		printf("%ld",aux[i]);
	printf(" bin");

}

void converte_decimal_hexadecimal (char *c) {
	int z = 0,i,x = 0;
	long int n = 0;
	for (i = strlen(c)-1; i >= 0 ;i--)
		n += (int) (c[i]-'0')* pow(10,x++);
//	printf("n = %ld\n",n);
	long int aux[1000];
	while(n != 0) {
		aux[z++] = (n % 16);
		n = n / 16;
	}

	for (i = z-1; i>= 0;i--) {
		if (aux[i] >= 0 && aux[i] <= 9)
			printf("%ld",aux[i]);
		else {
			printf("%c",(char) aux[i] + 87);
		}
	}
	printf(" hex\n");
}

int main() {
	int j,N;
	scanf("%d",&N);
	for(j = 1;j <= N;j++) {
	char s1[1000],s2[6], aux[1000],vet[1000];
	int n,i;
	scanf("%s%*c%s", s1,s2);
//	printf("s1 = %s, s2 = %s\n",s1,s2);
	printf("Case %d:\n",j);
	if (strcmp(s2,"dec") == 0){
		converte_decimal_hexadecimal(s1);
		converte_decimal_binario(s1);
		printf("\n\n");
	}
	if (strcmp(s2,"bin") == 0) {
		long int result = converte_binario_decimal(s1);
		int z = 0;
		printf("%ld dec\n", result);
		long int b[1000];
		int k = 0;
		while(result != 0) {
			b[k++] = result % 16;
			result = result / 16;
		}
		for (i = k-1; i >= 0; i--) {
			if(b[i] >= 0 && b[i] <= 9)
				printf("%ld",b[i]);
			else 
				printf("%c",(char)b[i] + 87);
		}
		printf(" hex\n\n");
		
	}
	if (strcmp(s2,"hex") == 0) {
		long int result = 0, potencia = 1;
		int w = 0;
		int z1 = strlen(s1);
		for (i = z1-1; i>= 0;i--) {
			if (s1[i] >= '0' && s1[i] <= '9') {
				result += (s1[i]-'0')* potencia;
			}
			else {
				result += (s1[i]-87) * potencia;
			}
			potencia = potencia * 16;
		}
		printf("%ld dec\n",result);
		int b[1000], k = 0;
		while(result != 0) {
			b[k++] = result % 2;
			result = result / 2;
		}
		for (i = k-1; i >= 0; i--)
			printf("%d",b[i]);
		printf(" bin\n\n");
	}
	}
    return 0;
}

