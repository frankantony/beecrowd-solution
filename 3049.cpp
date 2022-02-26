#include<cstdio>

using namespace std;

int main() {
	int B,T;
	scanf("%d%d",&B,&T);
	float area_esquerda = (B+T) * 35.0f, area_direita = (160-B + 160-T) * 35.0f;
	if (area_esquerda == area_direita)
		printf("0\n");
	else if(area_esquerda > area_direita)
		printf("1\n");
	else
		printf("2\n");
    return 0;
}
