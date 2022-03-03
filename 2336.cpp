#include <iostream>
#include<string>

#define constante 1000000007

using namespace std;

int main() {
	string entrada;
	while(cin >> entrada) {
		long long int tam = entrada.length(), pot = 1, resultado = 0;
	
		for (int i = tam-1; i >= 0; i--) {
			resultado +=  (pot * (entrada[i] - 'A')) % constante;
			pot *= 26;
			pot %= constante;
		}
		cout << (resultado % constante) << endl;
	}
	
    return 0;
}

