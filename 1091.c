#include <stdio.h>
 
int main() {
 
	int N,M,X,Y,K,i;
	while(1){
		if (K == 0) break;
		scanf("%d",&K);
		scanf("%d%d",&N,&M);
		for(i = 0;i < K;i++) {
		
			scanf("%d%d",&X,&Y);
			if (X == N || Y == M) 
				printf("divisa\n");
			else if (X > N && Y > M)
				printf("NE\n");
			else if (X < N && Y > M)
				printf("NO\n");
			else if (X < N && Y < M)
				printf("SO\n");
			else
				printf("SE\n");
		}
	} 
    return 0;
}
