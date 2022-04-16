#include <stdio.h>
 
int main() {
 
	int B,N,i,D,C,V;
	while(scanf("%d %d", &B,&N) != EOF && (B != 0 && N != 0)){
		int reservas[B], debentures[B], creditos[B];
	//	printf("B = %d N = %d",B,N);

		for(i = 0;i < B;i++)
			scanf("%d",&reservas[i]);

		for(i = 0;i < B;i++){
			debentures[i] = 0;
			creditos[i] = 0;
		}

		for(i = 0;i < N;i++){
			//printf("i = %d\n",i);
			scanf("%d %d %d", &D,&C,&V);
			creditos[C-1] += V;
			debentures[D-1] += V;
		//printf("Entrou aqui!");
		}
	
		int passou = 0;
		for(i = 0;i < B;i++) {
			//printf("Entroud!");
			if(reservas[i] + creditos[i] - debentures[i] < 0){
				printf("N\n");
				passou = 1;
				break;
			}
		}
	//	printf("%d\n", passou);
		if(passou == 0) 
			printf("S\n");
}
    return 0;
}
