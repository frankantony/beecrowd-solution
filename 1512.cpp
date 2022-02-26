#include <cstdio>

using namespace std;

int main() {
	unsigned long long N, A, B;
	while(true) {
		scanf("%llu%llu%llu",&N,&A,&B);
		if (N == 0 && A == 0 && B == 0) break;
		unsigned long long cont = 0;
		for (unsigned long long i = 1; i <= N; i++)
			if ((i % A == 0) || (i % B == 0))
				cont++;
		printf("%llu\n", cont);
	}
    return 0;
}

