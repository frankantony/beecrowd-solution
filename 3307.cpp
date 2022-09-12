#include <cstdio>
#include<cmath>

using namespace std;

int main()
{
	int area, T;
	scanf("%d",&T);
	while(T) {
		scanf("%d",&area);
		float radius = sqrt(area/12.56f);
		if (radius < 12)
			printf("vermelho = R$ %.2f\n", area*0.09f);
		else if (radius >= 12 && radius <= 15)
			printf("azul = R$ %.2f\n", area*0.07f);
		else
			printf("amarelo = R$ %.2f\n", area*0.05f);
		T--;
	}
	return 0;
}

