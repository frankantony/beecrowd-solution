#include<cstdio>

using namespace std;

int main() {
	long long int A,B;
	scanf("%lld%lld",&A,&B);
	long long int soma = ((A+B)*(B-A+1))/2;

	printf("%lld\n", soma);
    return 0;
}

