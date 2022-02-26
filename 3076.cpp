#include<cstdio>
#include<cmath>

using namespace std;

int main() {
	long long int N;

	while(scanf("%lld",&N) != EOF) {
		double valor = N/100.0;
		long long int seculo = ceil(valor);
		printf("%lld\n", seculo);
	}
    return 0;
}

