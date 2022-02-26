#include<bits/stdc++.h>

using namespace std;

float nao_cumpre_presenca (string s1) {
	int i;
	float p = 0.0f, a = 0.0f;
	for (i = 0;i < s1.length(); i++) {
		if (s1[i] == 'P') 
			p++;
		if (s1[i] == 'A')
			a++;
	}
	float result = a/(a+p);
	return result > 0.25f;
}

int main() {
	int N,M,p1,p2;
	scanf("%d",&N);
	char s1[10000],s2[10000];
	string a[10000], b[10000];
	if (N == 0) cout << "\n";
	while(N >= 1) {
		p1 = 0;
		p2 = 0;
		scanf("%d",&M);
		scanf(" %[^\n]",s1);
		scanf(" %[^\n]",s2);

		char *x1 = strtok(s1," ");
		while(x1 != NULL) {
			a[p1++] = x1;
			x1 = strtok(NULL," ");
		}
		char *x2 = strtok(s2," ");
		while(x2 != NULL) {
			b[p2++] = x2;
			x2 = strtok(NULL," ");
		}
		int primeira_vez = 1;
		for (int i = 0;i < p1;i++) {
			if (nao_cumpre_presenca(b[i]) == 1) {
				if (primeira_vez == 1) {
					cout << a[i];
					primeira_vez = 0;
				}
				else
					cout << " " << a[i];
			}
		}
		cout << "\n";
		N--;
	}

    return 0;
}
