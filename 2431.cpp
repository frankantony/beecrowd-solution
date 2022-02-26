#include<cstdio>
#include<algorithm>

using namespace std;

int main() {

	int A1, B1, A2, B2, A, B;
	scanf("%d%d%d%d%d%d",&A1, &B1, &A2, &B2, &A, &B);
	if ((A1 + A2 >= A && min(B2,B1) >= B) || (A1 + A2 >= B && min(B2, B1) >= A) 

		|| (min(A1, B2) >= A && A2 + B1 >= B) || (min(A1, B2) >= B && A2 + B1 >= A)

		|| (min(B1,A2) >= A && A1+B2 >= B) || (min(B1,A2) >= B && A1+B2 >= A)
		
		|| (min(A1,A2) >= A && B1 + B2 >= B) || (min(A1,A2) >= B && B1 + B2 >= A)

		|| (A1 >= A && B1 >= B) || (A1 >= B && B1 >= A) || (A2 >= A && B2 >= B) || (A2 >= B && B2 >= A)
		)
		printf("S\n");
	else
		printf("N\n");

    return 0;
}
