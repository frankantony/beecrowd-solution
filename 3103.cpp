#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string entrada;
	int N;
	cin >> N;
	while(N) {
		cin >> entrada;
		int tam = entrada.size();
		sort(entrada.begin(),entrada.end());
		int i = 0;
		while (i < tam && entrada[i] =='0')
			i++;
		if (entrada[0] == '0' && i < tam) {
			char aux = entrada[0];
			entrada[0] = entrada[i];
			entrada[i] = aux;
		}
		cout << entrada << endl;
		N--;
	}
    return 0;
}

