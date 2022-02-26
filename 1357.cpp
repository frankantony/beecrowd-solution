#include<cstdio>
#include<cstring>

using namespace std;

char imprime_numero (char a, char b, char c, char d) {
	if (a == '*' && b == '.' && c == '.' && d == '.') return '1';
	else if (a == '*' && b == '.' && c == '*' && d == '.') return '2';
	else if (a == '*' && b == '*' && c == '.' && d == '.') return '3';
	else if (a == '*' && b == '*' && c == '.' && d == '*') return '4';
	else if (a == '*' && b == '.' && c == '.' && d == '*') return '5';
	else if (a == '*' && b == '*' && c == '*' && d == '.') return '6';
	else if (a == '*' && b == '*' && c == '*' && d == '*') return '7';
	else if (a == '*' && b == '.' && c == '*' && d == '*') return '8';
	else if (a == '.' && b == '*' && c == '*' && d == '.') return '9';
	else return '0';
}

int main() {
	int N, T;
	char L;
	while (true) {
		scanf("%d", &N);
		if (N == 0) break;
		scanf(" %c\n", &L);
		char mat[3][3*N-1];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3*N-1;j++) {
				mat[i][j] = '.';
			}
		}
		
		for (int i = 2; i < 3*N-1;i = i+3) {
			mat[0][i] = ' ';
			mat[1][i] = ' ';
			mat[2][i] = ' ';
		}
		
/*		for (int i = 0;i < 3*N-1;i++)
			if (mat[2][i] != ' ')
				mat[2][i] = '.';
*/
		if (L == 'S') {
			char entrada[N+1];
			scanf(" %s", entrada);

			int i = 0,j = 0;
			while (i < N) {
				if (entrada[i] == '1') {
					mat[0][j] = '*';
					mat[0][j+1] = '.';
					mat[1][j] = '.';
					mat[1][j+1] = '.'; 
				}
				else if (entrada[i] == '2') {
					mat[0][j] = '*';
					mat[0][j+1] = '.';
					mat[1][j] = '*';
					mat[1][j+1] = '.'; 
				}
				else if (entrada[i] == '3') {
					mat[0][j] = '*';
					mat[0][j+1] = '*';
					mat[1][j] = '.';
					mat[1][j+1] = '.'; 
				}
				else if (entrada[i] == '4') {
					mat[0][j] = '*';
					mat[0][j+1] = '*';
					mat[1][j] = '.';
					mat[1][j+1] = '*'; 
				}
				else if (entrada[i] == '5') {
					mat[0][j] = '*';
					mat[0][j+1] = '.';
					mat[1][j] = '.';
					mat[1][j+1] = '*'; 
				}
				else if (entrada[i] == '6') {
					mat[0][j] = '*';
					mat[0][j+1] = '*';
					mat[1][j] = '*';
					mat[1][j+1] = '.'; 
				}
				else if (entrada[i] == '7') {
					mat[0][j] = '*';
					mat[0][j+1] = '*';
					mat[1][j] = '*';
					mat[1][j+1] = '*'; 
				}
				else if (entrada[i] == '8') {
					mat[0][j] = '*';
					mat[0][j+1] = '.';
					mat[1][j] = '*';
					mat[1][j+1] = '*'; 
				}
				else if (entrada[i] == '9') {
					mat[0][j] = '.';
					mat[0][j+1] = '*';
					mat[1][j] = '*';
					mat[1][j+1] = '.'; 
				}
				else {
					mat[0][j] = '.';
					mat[0][j+1] = '*';
					mat[1][j] = '*';
					mat[1][j+1] = '*'; 
				}
				i++;
				j = j+3;
			}
			for (int i = 0;i < 3;i++) {
				for (int j = 0;j < 3*N-1;j++) {
					printf("%c", mat[i][j]);
				}
				printf("\n");
			}
		}
		else {
			for (int i = 0;i < 3;i++) {
				for (int j = 0;j < 3*N; j++) {
					int ch = getchar();
				    if (ch == '*' || ch == ' ' || ch == '.')
						mat[i][j] = (char) ch;
				}
			}
			int i = 0,j = 0;
			while (i < N) {
				char r = imprime_numero(mat[0][j], mat[0][j+1], mat[1][j], mat[1][j+1]);
				printf("%c", r);
				i++;
				j = j+3;
			}
			printf("\n");
		}
	}
    return 0;
}
