#include<cstdio>

using namespace std;

int main() {
	
	double N, D;
	while(scanf("%lf%lf",&N,&D) != EOF) {
		int inteira = (int) N;
		if (N-inteira > D)
			printf("%d\n", (inteira+1));
		else
			printf("%d\n", inteira);
	}
    return 0;
}
