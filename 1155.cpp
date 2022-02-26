#include<cstdio>

using namespace std;

int main() {

	double soma = 0.0;
	for (int i = 1;i <= 100;i++) 
		soma += 1.0/i;

	printf("%.2lf\n", soma);
    return 0;
}
