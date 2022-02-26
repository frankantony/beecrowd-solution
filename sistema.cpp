#include <cstdio>

using namespace std;

int main() {
	int casos, A, B;
	scanf("%d",&casos);
	while(casos >= 1) {
		scanf("%d%d",&A, &B);
		int x_2 = ((-3*A)+B)/3;
		int x_1 = A - x_2;
		printf("%d %d\n",x_1,x_2);
		casos--;
	}

    return 0;
}
