#include <cstdio>

using namespace std;

int main() {
	int casos, A, B;
	scanf("%d",&casos);
	while(casos >= 1) {
		scanf("%d%d",&A, &B);
		int area = (A*B)/2;
		printf("%d cm2\n",area);
		casos--;
	}

    return 0;
}
