#include<iostream>
#include<cmath>

using namespace std;

bool isPrime (int N) {
	if (N == 2) return true;
	for (int i = 2; i <= sqrt(N);i++)
		if (N % i == 0) return false;
	return true;
}

bool isHyperprime (int N) {
	int cont = 0, i = 2;
	while (N != 1) {
		if (N % i == 0) {
			cont++;
			N /= i;
		}
		else
			i++;
	}
	return isPrime(cont);
}

int main() {
	int N;
	while(cin >> N) {
		int cont = 0;
		for (int i = 2;i <= N;i++)
			if (isHyperprime(i)) cont++;
		cout << cont << endl;
	}
    return 0;
}
