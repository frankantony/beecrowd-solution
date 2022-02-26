#include <stdio.h>
 
int main() {
	int H1,M1,H2,M2,result;
	while(1) {
		scanf("%d%d%d%d",&H1,&M1,&H2,&M2);
		if (H1== 0 && M1 == 0 && H2 == 0 && M2 == 0) break;
		if ((H1 > H2) || (H1 == H2 && M1 > M2)) {
			result = 24*60 - (H1*60+M1) + (H2*60+M2);
		}
		else {
			result = (H2*60+M2)- (H1*60+M1);
		}
		printf("%d\n",result);
 	}
    return 0;
}
