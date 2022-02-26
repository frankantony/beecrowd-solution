#include<bits/stdc++.h>

using namespace std;

struct BST{
	int valor;
	BST *esquerda;
	BST *direita;
};

struct BST* maior (struct BST *r) {
	struct BST* t = r;
	while (t != NULL && t -> direita != NULL)
		t = t->direita;
	return t;
}

struct BST* insere (int valor, struct BST *r) {
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

struct BST* remove (int valor, struct BST *r) {
	if (r == NULL) {
		return NULL;
	}
	else if (valor < r->valor) {
		r->esquerda = remove (valor, r->esquerda);
	}
	else if (valor > r->valor) {
		r->direita = remove (valor, r->direita);
	}
	else {
		if (r->esquerda == NULL) {
			struct BST* x = r->direita;
			free(r);
			return x;
		}
		if (r->direita == NULL) {
			struct BST* x = r->esquerda;
			free(r);
			return x;
		}
		else {
			struct BST* m = maior (r->esquerda);
			r->valor = m->valor;
			
			r->esquerda = remove (r->valor, r->esquerda);
		}
	}
	return r;
}

int pesquisa (int valor, struct BST* r) {
	if (r == NULL) return 0;
	else if (valor == r->valor) return 1;
	else if (valor < r->valor) return pesquisa (valor, r->esquerda);
	return pesquisa(valor,r->direita);
}

vector<int> infi, pre, pos;

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

int converte (string s) {
	int soma = 0, tam_s = s.length();
	int fator = 1;
	for (int i = tam_s-1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '9') {
			soma += (s[i]-'0') * fator;
			fator = fator * 10;
		}
	}
	return soma;
}

int main() {
	char x;
	string str = "";
	BST* arvore = NULL;
	
	while (scanf("%c",&x) != EOF) {
		if (x == '\n') {
			int compare_infixa = str.compare("INFIXA");
			int compare_posfixa = str.compare("POSFIXA");
			int	compare_prefixa = str.compare("PREFIXA");
			int primeira_vez;
			if (str[0] == 'I' && str[1] == ' ') {
				int c = converte(str);
				arvore = insere(c,arvore);
			}
			else if (str[0] == 'R' && str[1] == ' ') {
				int c = converte(str);
				arvore = remove(c,arvore);
			}
			else if (compare_infixa == 0) {
				infixa(arvore);
				primeira_vez = 1;
				for (vector<int>::iterator it = infi.begin(); it != infi.end(); ++it) {
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
			else if (compare_posfixa == 0) {
				posfixa(arvore);
				primeira_vez = 1;
				for (vector<int>::iterator it = pos.begin(); it != pos.end(); ++it) {
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
			else if (compare_prefixa == 0) {
				prefixa(arvore);
				primeira_vez = 1;
				for (vector<int>::iterator it = pre.begin(); it != pre.end(); ++it) {
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
			else if (str[0] == 'P' && str[1] == ' ') {
				int c = converte(str);
				if (pesquisa(c, arvore) == 1)
					cout << c << " existe\n";
				else
					cout << c << " nao existe\n";
			}
			
			str = "";
		}
		else {
			str = str + x;
		}
	}

    return 0;
}

