#include <iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
 
int cardinalidade_intersecao (int *v1, int A, int *v2, int B) {
//	printf("FUncao chamada\n");
	int j = 0,k = 0,i = 0;
		while (i < A && j < B) {
		if(v1[i] == v2[j]) {
			k++;
			i++;
			j++;
		}		
		else if (v1[i] > v2[j])
			j++;
		else 
			i++;
	}
	return k;
}

int main() {
	int A, B,X;
	while(1) {
		scanf("%d%d",&A,&B);
		if (A == 0 && B == 0) break;
		int s1[A+1], s2[B+1];
		s1[A] = -1;
		s2[B] = -1;
		for (int i = 0;i < A;i++){
			scanf("%d",&s1[i]);
		}
		for (int i = 0;i < B;i++){
			scanf("%d",&s2[i]);
		}
		//Ordena os vetores..
		sort(s1, s1 + A);
		sort(s2, s2 + B);
	
		int q1[A],q2[B], k1 = 0, k2 = 0;	
		for(int i = 0;i < A;i++) {
			if (s1[i] != s1[i+1]) 
				q1[k1++] = s1[i];
		}
		if (k1 == 0) q1[k1++] = s1[0];

		for(int i = 0;i < B;i++) {
			if (s2[i] != s2[i+1])
				q2[k2++] = s2[i];
		}
		if (k2 == 0) q1[k2++] = s2[0];

	//	printf("Vetor q1\n");
	//	for(int i = 0;i < k1;i++)
	//		printf("%d\n",q1[i]);

	//	printf("Vetor q2\n");
	//	for(int i = 0;i < k2;i++)
	//		printf("%d\n",q2[i]);
		int r = cardinalidade_intersecao(q1,k1,q2,k2);

		if (k1 < k2)
			printf("%d\n",k1-r);
		else 
			printf("%d\n",k2-r);
	}
    return 0;
}
