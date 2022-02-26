#include <cstdio>
 
using namespace std;
 
int modulo (int x){
	if(x < 0) return -x;
	else return x;
}


int main() {
int X1,Y1,X2,Y2,x1,y1;
	while (1) {
		scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
		if (X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0) break;
		if (X1 == X2 && Y1 == Y2) printf("0\n");
		else if ((modulo(X2-X1) == modulo(Y2-Y1)) || (X1 == X2) || (Y1 == Y2)) printf("1\n");
		else printf("2\n");

	}

    return 0;
}
