#include<cstdio>

using namespace std;

int main() {
	double L, X, I;
	while(true) {
		scanf("%lf", &L);
		if (L == 0) break;
		I = L + (L-3.0f);
		X = (I-L)/L;
		printf("%.6lf\n",X);
	}
    return 0;
}
