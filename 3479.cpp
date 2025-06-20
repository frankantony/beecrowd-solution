#include <stdio.h>
 
int main() {
	int D, M;
	char T;
	scanf("%d/%d", &D, &M);

	if ((D >= 21 && M == 3) || (D <= 20 && M == 4))
		printf ("aries");
	else if ((D >= 21 && M == 4) || (D <= 20 && M == 5))
		printf("touro");
	else if ((D >= 21 && M == 5) || (D <= 20 && M == 6))
		printf("gemeos");
	else if ((D >= 21 && M == 6) || (D <= 22 && M == 7))
		printf("cancer");
	else if ((D >= 23 && M == 7) || (D <= 22 && M == 8))
		printf("leao");
	else if ((D >= 23 && M == 8) || (D <= 22 && M == 9))
		printf("virgem");
	else if ((D >= 23 && M == 9) || (D <= 22 && M == 10))
		printf("libra");
	else if ((D >= 23 && M == 10) || (D <= 21 && M == 11))
		printf("escorpiao");
	else if ((D >= 22 && M == 11) || (D <= 21 && M == 12))
		printf("sagitario");
	else if ((D >= 22 && M == 12) || (D <= 19 && M == 1))
		printf("capricornio");
	else if ((D >= 20 && M == 1) || (D <= 18 && M == 2))
		printf("virgem");
	else if ((D >= 19 && M == 2) || (D <= 20 && M == 3))
		printf("peixes");
	
	printf("\n");
	return 0;
}
