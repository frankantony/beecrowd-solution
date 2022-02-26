#include<cstdio>

using namespace std;

int mdc (int a, int b) {
	if (b == 0)
		return a;
	return mdc (b, a % b);
}

int main() {
	int A,B,C,D;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	int resultA = D*A + B*C;
	int resultB = B*D;
	
	int m = mdc(resultA, resultB);
	
	resultA = resultA/m;
	resultB = resultB/m;

	printf("%d %d\n", resultA, resultB);
    return 0;
}

