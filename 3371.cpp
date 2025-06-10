#include<cstdio>
#include<algorithm>

using namespace std;

struct Tarefa {
	int T, D, pos;
};

int cmp (Tarefa x, Tarefa y) {
	return x.D < y.D;
}

int main() {
	int N, T, soma = 0, maximo = 0;
	scanf("%d",&N);
	Tarefa tarefas[N];
	for (int i = 0; i < N; i++) {
		scanf("%d%d",&tarefas[i].T, &tarefas[i].D);
		tarefas[i].pos = i+1;
		soma += tarefas[i].T;
		if (maximo < tarefas[i].D)
			maximo = tarefas[i].D;
	}
	if (soma > maximo)
		printf("*\n");
	else {
		sort(tarefas, tarefas + N, cmp);
		printf("%d", tarefas[0].pos);
		for (int i = 1;i < N;i++)
			printf(" %d", tarefas[i].pos);
		printf("\n");
	}
	return 0;
}

