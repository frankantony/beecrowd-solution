#include <stdio.h>
 
int main() {
	int n,k,i,nc,j = 0;
	scanf("%d",&nc);
	while(j < nc){
		scanf("%d %d",&n,&k);
		int v[10000];
		for(i = 0; i < 10000;i++)
			v[i] = 0;
		int z = 0, x = 0;
		i = 0;
		while (x < n-1) {
			if(v[i] == 0) z++;
			if (z == k){
	//		printf("i = %d\n",i+1);
				v[i] = 1;
				z = 0;
				x++;
			}
	//		printf("i = %d\n",i);
			if(i == n-1)
				i = 0;
			else
				i++;
	//		i = (i+ 1)%(n-1);
		}
		for(i = 0; i < n;i++){
			if(v[i] == 0)
				printf("Case %d: %d\n",j+1,i+1);
		}
		j++;
	}
  return 0;
}
