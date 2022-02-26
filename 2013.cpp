#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

bool verifica (unsigned long long N) {
	vector<int> vetor;
	while (N != 0) {
		vetor.push_back(N % 10);
		N /= 10;
	}
	sort(vetor.begin(), vetor.end());
	vetor.push_back(10);
	int cont = 1;
	for (int i = 0;i < vetor.size()-1;i++) {
		printf(" (%d, %d) \n", vetor[i], vetor[i+1]);
		if (vetor[i] == vetor[i+1]) {
			cont++;
		}
		else {
			if (cont > 2)
				return false;
			cont = 1;
		}
	}
	return true;
}

int main() {
	unsigned long long U;
	scanf("%llu",&U);
//	printf("verifica = %d\n", verifica(U));
	for (unsigned long long i = U;i >= 0; i--) {
		if (verifica(i)) {
			printf("%llu\n", i);
			break;
		}
	}

    return 0;
}

