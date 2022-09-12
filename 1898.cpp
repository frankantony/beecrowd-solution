#include <cstdio>
#include<cstring>

using namespace std;

bool isDigit (char c) {
	return c >= '0' and c <= '9';
}


int main() {
	int cpf[11];
	for (int i = 0; i < 11;i++)
		scanf(" %d", &cpf[i]);
	char first[61], last[61];
	printf("cpf ");
	for (int i = 0;i < 11;i++)
		printf("%d", cpf[i]);
	 
    return 0;
}
