#include<iostream>
#include<string>

using namespace std;

int resolve (int N) {
	int fib[N], i;
	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i <= N;i++) {
		fib[i] = fib[i-1] + fib[i-2];
		if (fib[i] > N) break;
	}
	int indice = i;
	bool candidato = true;
	string valor = "";
	while (indice >= 1) {
		if (N - fib[indice-1] >= 0) {
			N = N - fib[indice-1];
			if (candidato) {
				valor += "1";
				candidato = false;
			}
			else {
				valor += "0";
				candidato = true;
			}
		}
		else {
			valor += "0";
			candidato = true;
		}
		indice--;
	}

	int result = 0, j = 0;
	for (int i = valor.length() - 2; i >= 0; i--) {
			result += (valor[i] == '1') ? fib[j] : 0;
		j++;
	}

	return result;
}

int main() {
	int T, N;
	cin >> T;
	while(T--) {
		cin >> N;
		int result = resolve(N);
		cout << result << endl;
	}

    return 0;
}
