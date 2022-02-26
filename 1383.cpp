#include <iostream>

using namespace std;

bool verificaSubmatriz (int *mat, int linha, int coluna){
	bool usado[10];
	for (int i = 1;i <= 9;i++)
		usado[i] = false;
	for (int i = linha; i < linha + 3; i++) {
		for (int j = coluna; j < coluna + 3; j++) {
			usado[mat[i*9+j]] = true;
		}
	}
	for (int i = 1;i <= 9;i++)
		if (!usado[i])
			return false;
	return true;
}

bool verificaLinha (int *mat, int linha) {
	bool usado[10];
	int j;
	for (j = 1;j <= 9;j++)
		usado[j] = false;
	for (j = 0;j < 9;j++)
		usado[mat[linha*9 + j]] = true;
	for (j = 1;j <= 9;j++)
		if (!usado[j])
			return false;
	return true;
}

bool verificaColuna (int *mat, int coluna) {
	bool usado[10];
	int j;
	for (j = 1;j <= 9;j++)
		usado[j] = false;
	for (j = 0;j < 9;j++)
		usado[mat[j*9 + coluna]] = true;
	for (j = 1;j <= 9;j++)
		if (!usado[j])
			return false;
	return true;
}

bool verificaSudoku (int *mat) {
	bool result = verificaSubmatriz(mat,0,0) && verificaSubmatriz(mat,0,3) && verificaSubmatriz(mat,0,6)
				  && verificaSubmatriz(mat,3,0) + verificaSubmatriz(mat,3,3) && verificaSubmatriz(mat,3,6)
				  && verificaSubmatriz(mat,6,0) + verificaSubmatriz(mat,6,3) && verificaSubmatriz(mat,6,6);
	if (!result) return false;
	for (int i = 0;i < 9;i++)
		if (!verificaColuna(mat,i) || !verificaLinha(mat,i))
			return false;
	return true;
}

int main () {
	int N, casos = 1;
	cin >> N;
	
	while(casos <= N) {
		int vet[81];
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++)
				cin >> vet[i*9 + j];
		cout << "Instancia "<< casos << "\n";
		if (verificaSudoku(vet))
			cout << "SIM\n";
		else
			cout << "NAO\n";
		cout << "\n";
		casos++;
	}
	return 0;
}
