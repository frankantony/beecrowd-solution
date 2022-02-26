#include <cstdio>
#include<cmath>

using namespace std;

int main() {
	int N, placas;
	scanf("%d%d",&N, &placas);
	int total = N*placas;
	printf("%.0f",ceil(total*0.1));
	printf(" %.0f",ceil(total*0.2));
	printf(" %.0f",ceil(total*0.3));
	printf(" %.0f",ceil(total*0.4));
	printf(" %.0f",ceil(total*0.5));
	printf(" %.0f",ceil(total*0.6));
	printf(" %.0f",ceil(total*0.7));
	printf(" %.0f",ceil(total*0.8));
	printf(" %.0f\n",ceil(total*0.9));
    return 0;
}
