#include <bits/stdc++.h>

using namespace std;

int letra_repetida (string s1) {
	int tam1 = s1.length();
	if (tam1 == 1) return 0;
	for (int i = 0;i < tam1-1;i++) {
		if (s1[i] == s1[i+1]) 
			return 1;
	}
	return 0;
}

int main() {

	string cardapio, cafe, almoco;
	int N;
	cin >> N;
    cin.ignore();
	
	while (N >= 1) {

		getline(cin, cardapio);
		getline(cin, cafe);
		getline(cin, almoco);
		
		string uniao = cafe + almoco;

		bool x;		
		for (int i = 0;i < uniao.length();i++) {
			x = true;
			for (int j = 0;j < cardapio.length();j++) {
				if (uniao[i] == cardapio[j])
					x = false;
			}
			if (x == true) {
				cout << "CHEATER\n";
				break;
			}
		}

		if (x == false) {
			string janta;			
			bool a;
			for (int i = 0; i < cardapio.length();i++) {
				a = true;
				for (int j = 0;j < uniao.length();j++) {
					if (cardapio[i] == uniao[j]) {
						a = false;
					}
				}
				if (a == true) {
					janta = janta + cardapio[i];
				}
			}
			sort(janta.begin(),janta.end());
			cout << janta;
			cout<<endl;
		}

		N--;
  	}
	return 0;
}
