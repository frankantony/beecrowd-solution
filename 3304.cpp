#include <cstdio>

using namespace std;

bool sortudo (unsigned long long N) {
	while(N != 0) {
		int valor = N % 10;
		if (valor != 4 && valor != 7) 
			return false;
		N /= 10;		
	}
	return true;
}

int main() {
	unsigned long long N;
	while(scanf("%llu",&N) != EOF) {
		bool quase_sortudo = false;
		if (sortudo(N)) {
			printf("sortudo\n");
		}
		else {
			for (unsigned long long i = N; i >= 0;i--) {
				bool calcula = sortudo(i);
				if (calcula && N % i == 0) {
					printf("quase sortudo\n");
					quase_sortudo = true;		
					break;
				}
			}
			if (!quase_sortudo)
				printf("azarado\n");
		}

	}

    return 0;
}
