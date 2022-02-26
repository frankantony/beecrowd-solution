#include<stdio.h>

int main() {
	int N,i;
	while(1){
		scanf("%d",&N);
		if (N == 0) break;
		int vet[N],c_1 = 0, c_0 = 0;
		for (i = 0;i < N;i++) {
			scanf("%d",&vet[i]);
			if (vet[i] == 0) c_0++;
			if (vet[i] == 1) c_1++;
		}
		printf("Mary won %d times and John won %d times\n",c_0,c_1);
	}
	
    return 0;
}


