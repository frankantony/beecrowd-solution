#include<cstdio>

using namespace std;

int main() {
	float A, B, C, D, exame;
	scanf("%f%f%f%f",&A,&B,&C,&D);
	float media = (2*A + 3*B + 4*C + D) / 10.0;
	printf("Media: %.1f\n", media);
	if (media >= 7)
		printf("Aluno aprovado.\n");
	else if (media >= 5 && media <= 6.9) {
		printf("Aluno em exame.\n");
		scanf("%f", &exame);
		printf("Nota do exame: %.1f\n", exame);
		float media2 = (exame + media) / 2.0;
		if (media2 >= 5)
			printf("Aluno aprovado.\n");
		else
			printf("Aluno reprovado.\n");
		printf("Media final: %.1f\n", media2);
	}
	else
		printf("Aluno reprovado.\n");
    return 0;
}

