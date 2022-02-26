#include<cstdio>
#include<cstring>

using namespace std;

bool verifica_subsequencia (char *a, char *b) {
	int tam_a = strlen(a), tam_b = strlen(b), j = 0;
	for (int i = 0;i < tam_a && j < tam_b;i++) {
		if (a[i] == b[j])
			j++;
	}
	return j == tam_b;
}

int main() {
	
	int K, casos;
	char S[100002], R[102];
	scanf("%d",&casos);
	while(casos >= 1) {
		scanf(" %s", S);
		scanf("%d",&K);
		for (int i = 0;i < K;i++) {
			scanf(" %s", R);
			if (verifica_subsequencia(S, R))
				printf("Yes\n");
			else
				printf("No\n");
		}
		casos--;
	}
    return 0;
}
