#include<cstdio>

using namespace std;

int main() {
	float A, B, C;
	scanf("%f%f%f",&A, &B, &C);
	if (A+B > C && A+C > B && B + C > A)
		printf("Perimetro = %.1f\n", (A+B+C));
	else
		printf("Area = %.1f\n", (A+B)*C/2.0);
    return 0;
}

