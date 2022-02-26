#include<bits/stdc++.h>

using namespace std;

int main() {
	char s;
	string result = "";
	while(scanf("%c",&s) != EOF) {

		if (s != ' ') {			
			result += s;
		}
		if (s == '\n') {
			sort(result.begin(),result.end());
			result = result + '-';
			string aux = "";
			//cout << "Aux sem adicionar elemento:" << aux.length() << "\n";
			for (int i = 0;i < result.length()-1;i++) {
				if (result[i] != result[i+1])
					aux = aux + result[i];
			}
			aux = aux + '-';
			int entrou = 0, primeira_vez = 1;
			for (int i = 1;i < aux.length()-1;i++) {
				//cout << "aux[i] = " << aux[i] << ", aux[i+1] =  " << aux[i+1] << "\n";
				if (aux[i+1] == aux[i] + 1) {
					//cout << "Diferença\n";
					if (entrou == 0){
						if (primeira_vez == 1) {
							cout << aux[i] << ":";
							primeira_vez = 0;
						}
						else {
							cout << ", " << aux[i] << ":";
						}			
						entrou = 1;
					}
				}
				else {
					if (entrou == 1) {
						cout << aux[i];
						entrou = 0;
						primeira_vez = 0;
					}
					else {
						if (primeira_vez ==1)
							cout << aux[i] << ":" << aux[i];
						else 
							cout << ", " << aux[i] << ":" << aux[i];
						primeira_vez = 0;
					}
				}

			}
			result = "";
			cout << "\n";
	}
	}
    return 0;
}
