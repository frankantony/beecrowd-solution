#include <stdio.h>

int main() {
	int n,i, A, B;
	while (1) {
		scanf("%d",&n);
		if (n == 0) break;
		int cont1 = 0, cont2 = 0;
		for(i = 0; i < n; i++) {
			scanf("%d%d",&A,&B);
			if (A > B) cont1++;
			else if (A < B) cont2++;
		}

		printf("%d %d\n", cont1, cont2);
	}
    return 0;
}
