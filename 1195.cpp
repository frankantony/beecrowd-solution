#include<cstdio>
#include<cstdlib>
using namespace std;

struct BST{
	int valor;
	BST *esquerda;
	BST *direita;
};

struct BST* insere (int valor, struct BST *r) {
	if (r == NULL) {
		struct BST* q = (struct BST*) malloc(sizeof(struct BST));
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

void infixa (struct BST* r) {
	if (r == NULL) return;
	infixa(r->esquerda);
	printf(" %d",r->valor);
	infixa(r->direita);
}

void prefixa (struct BST* r) {
	if (r == NULL) return;
	printf(" %d",r->valor);
	prefixa(r->esquerda);
	prefixa(r->direita);
}

void posfixa (struct BST* r) {
	if (r == NULL) return;
	posfixa(r->esquerda);
	posfixa(r->direita);
	printf(" %d",r->valor);
}

int main() {
	int casos, cont = 1, N, valor;
	scanf("%d",&casos);
	while(cont <= casos) {	
		struct BST *arvore = NULL;
		scanf("%d",&N);
		for (int i = 0;i < N;i++) {
			scanf("%d",&valor);
			arvore = insere (valor, arvore);
		}
		printf("Case %d:\n",cont++);
		printf("Pre.:");
		prefixa(arvore);
		printf("\n");

		printf("In..:");
		infixa(arvore);
		printf("\n");

		printf("Post:");
		posfixa(arvore);

		printf("\n\n");
	}
	return 0;
}
