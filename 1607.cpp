#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	
	int casos;
	char A[10005], B[10005];
	scanf("%d",&casos);
	while(casos >= 1) {
		scanf(" %s %s", A, B);
		int tam = strlen(A), soma = 0;
		for (int i = 0;i < tam;i++)	{
			if (A[i] <= B[i])
				soma += (B[i] - A[i]);
			else
				soma += 26 - (A[i] - B[i]);
		}
		printf("%d\n", soma);
		casos--;
	}
    return 0;
}
