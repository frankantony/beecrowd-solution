#include <cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>

using namespace std;

void converte (unsigned long long N) {
	string s;
	if (N == 0) {
		cout << "0\n";
		return;
	}
	while(N != 0) {
		int valor = N % 32;
		char c = valor;
		if (valor >= 10) {
			s.push_back(c + 55);
		}
		else {
			s.push_back(c + '0');
		}
		N = N / 32;
	}
	reverse(s.begin(), s.end());
	cout <<  s << "\n";
}

int main() {
	unsigned long long N;
	while(true) {
		cin >> N;
		if (N == 0){
			converte(N);			
			break;
		}
		converte(N);
	}

    return 0;
}
