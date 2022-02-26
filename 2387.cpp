#include<cstdio>
#include<algorithm>

using namespace std;

struct Agenda {
	int X;
	int Y;
};

bool compara (Agenda a, Agenda b) {
	return a.Y < b.Y;
}

int main() {
	int N, X, Y;
	scanf("%d",&N);
	Agenda agenda[N];
	for (int i = 0;i < N;i++) 
		scanf("%d%d",&agenda[i].X,&agenda[i].Y);
	sort(agenda, agenda + N, compara);
	int inicio = agenda[0].X, termino = agenda[0].Y, cont = 1;
	
	for (int i = 1;i < N;i++) {
		if (termino <= agenda[i].X) {
			cont++;
			inicio = agenda[i].X;
			termino = agenda[i].Y;
		}
	}
 	printf("%d\n",cont);
    return 0;
}
