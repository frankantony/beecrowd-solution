#include<cstdio>

using namespace std;

int main() {
	int value, N;
	scanf("%d",&N);
	int result = 0;
	for (int i = 0; i < N;i++) {
		scanf("%d", &value);
		int floor = (value / 3);
		result += floor * 3;
	}
	printf("%d\n", result);
    return 0;
}

