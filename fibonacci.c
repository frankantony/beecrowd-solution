#include<stdio.h>

void main(){

int n,i;
scanf("%d",&n);

int v[n];
v[0] = 1;
v[1] = 1;
for(i = 2; i < n;i++)
	v[i] = v[i-1] + v[i-2];
printf("fib(%d) = %d \n ", n, v[n-1]);

}
