#include<cstdio>

using namespace std;

int main() {

	int N, a = 1, b = 2, c = 3;
	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		printf("%d %d %d PUM\n", a, b, c);
		a += 4;
		b += 4;
		c += 4;
	}
    return 0;
}
