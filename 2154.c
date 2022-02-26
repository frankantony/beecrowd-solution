#include <stdio.h>
 
int main() {
	int n,i,v1,v2,cont;
	char c;
	char string[256];
	while(scanf("%d",&n) != EOF) {
	int grau[100], prod[100],cont = 0;
		for(i = 0;i < n;i++) {
			scanf("%d",&v1);
			scanf("%c",&c);
			scanf("%d",&v2);

			if(i != n-1) {
				scanf("%s",string);
			}
			grau[cont] = v2*v1;
			prod[cont] = v2-1;
			cont++;
		
		}

	
		for(i = 0; i < cont;i++) {
			printf("%d",grau[i]);
			printf("x");
			if (prod[i] != 1)
				printf("%d",prod[i]);
			if(i != cont-1){
				printf(" + ");
			}
		}
		printf("\n");
	}
    return 0;
}
