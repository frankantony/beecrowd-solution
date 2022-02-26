#include <cstdio>
#include<cstring>

using namespace std;

int main() {
	char entrada[1000];
	while(scanf(" %[^\n]",entrada) != EOF) {
		int tam = strlen(entrada);
		long int calc, pot, valor1;
		if (entrada[tam-1] == 'J') {
			calc = 0, pot = 1, valor1;
			for (int i = tam-3; i >= 0 ; i--) {
				if (entrada[i] == '+') {
					valor1 = calc;
					calc = 0;
					pot = 1;	
				}
				else {
					calc += (entrada[i]-'0') * pot;
					pot *= 10;
				}
			}
				
			printf("%ld\n", (valor1 + calc));
		}
		else if (entrada[0] == 'R') {
			calc = 0, pot = 1, valor1;
			for (int i = tam-1; i >= 2; i--) {
				if (entrada[i] == '=') {
					valor1 = calc;
					calc = 0;
					pot = 1;
				}
				else {
					calc += (entrada[i] - '0') * pot;
					pot *= 10;
				}
			}
			printf("%ld\n", (valor1 - calc));
		}
		else {
			calc = 0, pot = 1, valor1;
			int i = tam-1;
			while (i >= 0) {
				if (entrada[i] == '=') {
					valor1 = calc;
					calc = 0;
					pot = 1;
					i = i - 2;
				}
				else {
					calc += (entrada[i] - '0') * pot;
					pot *= 10;
				}
				i--;
			}
			printf("%ld\n", (valor1-calc));
		}

	}
	

    return 0;
}

