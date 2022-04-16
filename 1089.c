#include <stdio.h>

int verifica_pico (int a, int b, int c) {
	return (a > b && b < c) || (a < b && b > c);
}

int main() {
	int n,i;
	while (1) {
		scanf("%d",&n);
		if (n == 0) break;
		int v[n], picos = 0;
		for(i = 0; i < n; i++)
			scanf("%d",&v[i]);
		for (i = 0;i < n;i++) {
			if (verifica_pico(v[i],v[(i+1)%n], v[(i+2)%n]))
				picos++;
		}
		printf("%d\n", picos);
	}
    return 0;
}

