#include <stdio.h>
#include<math.h> 

int main() {
	int k=1,n;
	while(1){
		int i = 0;
		scanf("%d",&n);
		if(n == 0) break;
		int primeiro= 1;
		for (k = i; i < (int)sqrt(n); i++) {
			k += 2*i+1;
			if (primeiro == 1) {
				printf("%d",k);
				primeiro = 0;
			} else
				printf(" %d",k);
		}
		printf("\n");
	}
    return 0;
}
