#include<cstdio>
 
using namespace std;

bool atingido (char c, int t) {
	if (c == 'S' && (t == 1 || t == 2)) return 1;
	else if (c == 'J' && t > 2) return 1;
	return 0;
}
 
int main() {

	int N,c = 0,T;
	char pulos[51];
	scanf("%d",&N);
	while(c < N) {
		scanf("%d",&T);
		int altura[T],cont = 0;
		for (int i = 0;i < T;i++)
			scanf("%d",&altura[i]);
		scanf("%s",pulos);
		
		for (int i = 0;i < T;i++) {
			if (atingido (pulos[i], altura[i])) {
				cont++;
			}
		}
		printf("%d\n",cont);
		c++;
	}

 
    return 0;
}


