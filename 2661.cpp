#include <cstdio>

using namespace std;

int divisor (long int N) {
	for (int i = 2; i <= N; i++) {
		if (N % i == 0) {
			return i;
		}
	}
}

bool primo (long int N) {
	for (int i = 2;i*i <= N;i++)
		if (N % i == 0)
			return false;
	return true;
}

bool despojado (long int N) {
	int d = divisor(N);
	N = N / d;
	int var = 0;
	if (N == 1) return false;
	while(N != 1) {
		int e = divisor(N);
		if (d == e)
			return false;
		N = N / e;	
		d = e;
	}
	return true;
}

int main() {
	long int N;
	//printf("despojado = %d\n", despojado(3));
	scanf("%ld",&N);
	int cont = 0;
	for(int i = 2; i <= N;i++) {
		if (N % i == 0) {
			if (despojado(i)) {
				cont++;
			}
		}
	}
	
	printf("%d\n",cont);

    return 0;
}
