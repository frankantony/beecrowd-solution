#include<stdio.h>

int main() {

	int M;
	while(scanf("%d",&M) != EOF){
		if (M % 6 == 0) printf("Y\n");
		else printf("N\n");
	}
 
    return 0;
}


