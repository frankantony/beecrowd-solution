#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int diferenca[100005];

int main() {
	
	int N, G;
	while(cin >> N >> G) {
		int S, R, pontos = 0, p = 0;
		for (int i = 0; i < N; i++) {
			cin >> S >> R;
			if (S == R) {
				pontos++;
				if (G > 0) {
					pontos += 2;
					G--;
				}
			}
			else if (S < R)
				diferenca[p++] = R - S;
			else
				pontos += 3;
		}

		sort(diferenca, diferenca + p);
		for (int i = 0; i < p; i++) {
			int dif = diferenca[i];
			if (G - dif-1 >= 0) {
				pontos += 3;
				G = G - dif - 1;
			}
			else if (G - dif == 0) {
				pontos++;
				G = G-dif;
			}
		}

		cout << pontos << "\n";
	}
    return 0;
}
