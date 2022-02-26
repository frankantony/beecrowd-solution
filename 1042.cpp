#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int A, B, C;
	unsigned long long F = 1000000000000000000;
	printf("%llu",F);
	scanf("%d%d%d",&A, &B, &C);
	int vet[] = {A, B, C};
	sort(vet, vet + 3);
	for (int i = 0;i < 3;i++)
	printf("%d\n", vet[i]);
	printf("\n");
	printf("%d\n%d\n%d\n", A, B, C);
    return 0;
}

