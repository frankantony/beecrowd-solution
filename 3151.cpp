#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Iogurte {
	int valor, volume;
};

bool compara(Iogurte a, Iogurte b) {
	if (a.valor != b.valor)
		return a.valor > b.valor;
	if (a.volume != b.volume)
		return a.volume < b.volume;
}

int main() {
	int testes, N, X;
	scanf("%d", &testes);
	scanf("%d%d",&N,&X);
	Iogurte iogurte[N];
	while(testes--) {
		for (int i = 0;i < N;i++) 
			scanf("%d%d",&iogurte[i].valor, &iogurte[i].volume);
		sort(iogurte, iogurte + N, compara);
		int valor = 0, valor_corrente, volume_corrente;
		int volume = 0;
		for (int i = 0;i < N;i++) {
			valor_corrente = iogurte[i].valor;
			volume_corrente = iogurte[i].volume;
			if (volume + iogurte[i].volume > X)
				break;
			volume += iogurte[i].volume;
			valor += iogurte[i].valor;
		}

		float restante = X - volume;
		float result = (restante / volume_corrente) * valor_corrente;
		printf("%.2f\n", result + valor);
	}
    return 0;
}

