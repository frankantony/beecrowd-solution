#include<cstdio>

using namespace std;

int fibonacci (int N) {
	int fib[N];
	fib[0] = 1;	fib[1] = 2;
	for (int i = 2;i < N;i++)
		fib[i] = fib[i-1] + fib[i-2];
	return fib[N-1];
}


int main() {
	int N;
	while(1) {
		scanf("%d",&N);
		if (N == 0) break;
		printf("%d\n",fibonacci(N));
	}
    return 0;
}
