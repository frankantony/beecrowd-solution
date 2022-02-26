#include<cstdio>
#include<algorithm>
#include<string.h>

using namespace std;

int mdc(int a, int b) {
	if (b == 0) return a;
	return mdc(b, a % b);
}

bool pitagoras (int x, int y, int z) {
	if (x >= y && x >= z) 
		return x * x == z*z + y*y;
	if (y >= z && y >= x)
		return y*y == z*z + x*x;
	else
		return z*z == x*x + y*y;
}

int mdc_3 (int x, int y, int z) {
	int xy = mdc(x,y), yz = mdc(y,z), xz = mdc(x,z);
	if (xy == yz) return xy;
	if (yz == xz) return yz;
	if (xy == xz) return xz;
}
int main() {
	int x,y,z;
	while (scanf("%d%d%d",&x,&y,&z) != EOF) {
		if (mdc_3(x,y,z) == 1 && pitagoras(x,y,z))
			printf("tripla pitagorica primitiva\n");
		else if(pitagoras(x,y,z))
			printf("tripla pitagorica\n");
		else
			printf("tripla\n");
	}
    return 0;
}


