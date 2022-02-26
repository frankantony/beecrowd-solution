#include <stdio.h>

int main() {
  	
	char caractere;
	int primeira_vez = 1;
	int hora, minuto, segundo;
	double result, aux2, soma = 0.0, velocidade, aux1;
	
	while (scanf("%d:%d:%d%c",&hora, &minuto, &segundo, &caractere) != EOF) {
		aux1 = velocidade;
		aux2 = result;
		if (caractere == ' ') {
			scanf("%lf%*c",&velocidade);
			result =  (hora*3600.0 + minuto*60.0 + segundo)/3600.0;
			if (primeira_vez)
				primeira_vez = 0;
			else{
				soma += (result - aux2) * aux1;
			}
		} else {
			soma += (((hora*3600.0 + minuto*60.0 + segundo)/3600.0) - aux2) * aux1;
			result = ((hora*3600.0 + minuto*60.0 + segundo)/3600.0);
			if (hora < 10)
				printf("0%d:",hora);
			else
				printf("%d:",hora);
			if (minuto < 10)
				printf("0%d:",minuto);
			else
				printf("%d:",minuto);
			if (segundo < 10)
				printf("0%d",segundo);
			else
				printf("%d",segundo);
			
			printf(" %.2lf km\n", soma);
		}

	}
    return 0;
}
