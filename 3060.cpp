#include<cstdio>

using namespace std;

int main() {
	int V,P, quociente;
	scanf("%d%d",&V,&P);
	if (V % P == 0) {
		quociente = V / P;
		for (int i = 0;i < P;i++)
			printf("%d\n", quociente);
	}
	else {
		int R = V % P;
		quociente = V / P;
		int restante = P-R;
		int y = (V - (P-R)*(V/P)) / R;
		for (int i = 0; i < R; i++) 
			printf("%d\n", y);

		for (int i = 0; i < P - R;i++)
			printf("%d\n", quociente);
	}
    return 0;
}
