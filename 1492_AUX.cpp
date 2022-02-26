// Given two integers a and b. The task is to print
// sum of all the digits appearing in the
// integers between a and b
#include "bits/stdc++.h"

using namespace std;

// Memoization for the state results
long dp[20][32][2];

// Stores the digits in x in a vector digit
void pega_digitos (long a, string &digitos) {
	while (a != 0) {
		cout << "Adicionando " <<  ((a % 2) + '0') << "na string\n";
		digitos.push_back((a % 2) + '0');		
		a /= 2;
	}
}

// Return sum of digits from 1 to integer in
// digit vector
long soma_digitos (int idx, int soma, int aperto,
						string digitos) {
	// base case
	if (idx == -1)
		return soma;

	// checking if already calculated this state
	if (dp[idx][soma][aperto] != -1 and aperto != 1)
		return dp[idx][soma][aperto];

	long resultado = 0;

	// calculating range value
	char k = (aperto)? digitos[idx] : '1';

	for (char i = '0'; i <= k; i++)
	{
		// calculating newTight value for next state
		int aux_aperto = (digitos[idx] == i)? aperto : 0;

		resultado += soma_digitos (idx-1, soma + (i - '0'), aux_aperto, digitos);
	}

	if (!aperto)
		dp[idx][soma][aperto] = resultado;

	return resultado;
}

long calcula_intervalo_soma (long a, long b) {

	memset(dp, -1, sizeof(dp));

	string digitA;
	printf("pega_digitos (a-1, digitA);\n");
	pega_digitos (a-1, digitA);

	cout << "digitA = " << digitA << endl;			

	long valor1 = soma_digitos (digitA.size() - 1, 0, 1, digitA);

	string digitB;
	printf("pega_digitos (b, digitB);\n");
	pega_digitos (b, digitB);
	
	cout << "digitB = " <<  digitB << endl;	
	
	long valor2 = soma_digitos (digitB.size() - 1, 0, 1, digitB);

	return (valor2 - valor1);
}

int main() {
	long A,B;

	while(scanf("%lu%lu",&A,&B) != EOF) {
		long r = calcula_intervalo_soma (A, B);
		printf("A = %lu, B = %lu\n", A, B);
		printf("resultado = %lu\n", r);
	}
    return 0;
}

