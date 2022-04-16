#include <stdio.h>
 
int main() {
int unsigned long x,y,z;
int l;
scanf("%d",&l);
printf("%d \n",l);

while(scanf("%lu %lu",&x,&y) != EOF){
	z = x^y;
	printf("%lu\n",z);
}
 
    return 0;
}
