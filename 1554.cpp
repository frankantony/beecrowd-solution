#include <cstdio>
#include<cmath>

using namespace std;

int main() {
	int N, casos, x, y, x_0, y_0, indice;
	scanf("%d",&casos);
	while(casos >= 1) {
		scanf("%d",&N);

		scanf("%d%d",&x_0,&y_0);
		float distancia = 100000.0;

		for (int i = 0;i < N;i++) {
			scanf("%d%d",&x, &y);
			float d = sqrt(pow(x-x_0, 2) + pow(y-y_0, 2));
			if(d < distancia) {
				indice = i;
				distancia = d;
			}
		}
		printf("%d\n", indice+1);
		casos--;
	}

    return 0;
}
