#include<iostream>

using namespace std;

int main() {
	int T,M;
	while(true) {
		cin >> T;
		int preco[T], peso[T];
		if (T == 0) break;
		for (int i = 0;i < T;i++) 
			cin >> preco[i] >> peso[i];
		cin >> M;
		int mat[M+1][T+1]; // Maior preco alcancado com o peso $\{1,...,M\}$ e os produtos \{1,...T\};
		for (int i = 0;i <= T;i++)
			mat[0][i] = 0;

		for (int i = 0;i <= M;i++)
			mat[i][0] = 0;
		
		for (int i = 1; i <= T; i++) {
			for (int w = 1; w <= M; w++) {
				if (peso[i-1] > w) // Se o produto $i$ e candidato a entrar na solucao.
					mat[w][i] = mat[w][i-1];
				else
					mat[w][i] = max(mat[w][i-1], mat[w - peso[i-1]][i-1] + preco[i-1]);
			}
		}	
		cout << mat[M][T] << "\n";
	}
    return 0;
}
