#include<bits/stdc++.h>

using namespace std;

struct BST{
	char valor;
	BST *esquerda;
	BST *direita;
};

struct BST* insere (char valor, struct BST *r) {
	if (r == NULL) {
		struct BST* q = (struct BST*)malloc(sizeof(struct BST));
		q->valor = valor;
		q->esquerda = q->direita = NULL;
		return q;
	}
	else if (valor < r->valor) {
		r->esquerda = insere (valor, r->esquerda);
	}
	else if (valor > r->valor) {
		r->direita = insere (valor, r->direita);
	}
	return r;
}

int pesquisa (char valor, struct BST* r) {
	if (r == NULL) return 0;
	else if (valor == r->valor) return 1;
	else if (valor < r->valor) return pesquisa (valor, r->esquerda);
	return pesquisa(valor,r->direita);
}

vector<char> infi, pre, pos;

void infixa (struct BST *r) {
	if (r == NULL) return;
		infixa (r->esquerda);
		infi.push_back(r->valor);
		infixa (r->direita);
}

void prefixa (struct BST *r) {
	if (r == NULL) return;
		pre.push_back(r->valor);
		prefixa (r->esquerda);
		prefixa (r->direita);
}

void posfixa (struct BST *r) {
	if (r == NULL) return;
		posfixa (r->esquerda);
		posfixa (r->direita);
		pos.push_back(r->valor);
}


int main() {
	BST* arvore = NULL;

	char x;
	string str = "";
	while (scanf("%c",&x) != EOF) {
		if (x == '\n') {
			if (str[0] == 'I' && str.length() == 3) {
				arvore = insere(str[2],arvore);
			}
			int compare_infixa = str.compare("INFIXA");
			int compare_posfixa = str.compare("POSFIXA");
			int	compare_prefixa = str.compare("PREFIXA");
			int primeira_vez;
			if (compare_infixa == 0) {
				infixa(arvore);
				primeira_vez = 1;
				for (vector<char>::iterator it = infi.begin(); it != infi.end(); ++it) {
					if (primeira_vez == 1) {
				        cout << *it;
						primeira_vez = 0;
					}
					else
						cout << " " << *it;
				}
				infi.clear();
				cout << "\n";
			}
			if (compare_posfixa == 0) {
				posfixa(arvore);
				primeira_vez = 1;
				for (vector<char>::iterator it = pos.begin(); it != pos.end(); ++it) {
					if (primeira_vez == 1) {
				        cout << *it;
						primeira_vez = 0;
					}
					else
						cout << " " << *it;
				}
				pos.clear();
				cout << "\n";
			}
			if (compare_prefixa == 0) {
				prefixa(arvore);
				primeira_vez = 1;
				for (vector<char>::iterator it = pre.begin(); it != pre.end(); ++it) {
					if (primeira_vez == 1) {
				        cout << *it;
						primeira_vez = 0;
					}
					else
						cout << " " << *it;
				}
				pre.clear();
				cout << "\n";
			}
			if (str[0] == 'P' && str.length() == 3) {
				if (pesquisa(str[2], arvore) == 1)
					cout << str[2] << " existe\n";
				else
					cout << str[2] << " nao existe\n";
			}
			str = "";		
		}
		else {
			str = str + x;
		}
	}

    return 0;
}

