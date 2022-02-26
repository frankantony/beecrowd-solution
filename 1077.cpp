#include<bits/stdc++.h>

using namespace std;

int precedente (char a) {
	if (a == '^')
		return 2;
	else if (a == '/' || a == '*')
		return 1;
	else if (a == '+' || a == '-')
		return 0;
	else
		return -1;
}

void infixa_para_posfixa (char *a) {
	stack<char> pilha;
	int tam_a = strlen(a);
	string posfixa = "";
	for (int i = 0;i < tam_a;i++) {
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9'))
			posfixa = posfixa + a[i];
		else if (a[i] == '(')
			pilha.push(a[i]);
		else if (a[i] == ')'){
			while (pilha.top() != '(') {
				posfixa = posfixa + pilha.top();
				pilha.pop();
			}
			pilha.pop();
		}
		else {
			while (!pilha.empty() && precedente(a[i]) <= precedente (pilha.top())) {
				posfixa = posfixa + pilha.top();
				pilha.pop();
			}
			pilha.push(a[i]);
		}
	}
	
	while(!pilha.empty()) {
		posfixa = posfixa + pilha.top();
		pilha.pop();
	}
	cout << posfixa << "\n";
}

int main() {
	int N;
	char s[10004];
	cin >> N;
	while(N >= 1) {
		cin >> s;
		infixa_para_posfixa(s);
		N--;
	}
 
    return 0;
}
