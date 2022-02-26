#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Horario{
	char nome[1001];
	int hora, minuto;
};

bool compara (Horario a, Horario b) {
	if (a.hora != b.hora)
		return a.hora > b.hora;

	if(a.minuto != b.minuto)
		return a.minuto < b.minuto;
	else
		return 0;
}

int main() {
	int minuto, N, p = 0, tempo, hora;
	char nome1[1001];
	scanf("%d%d",&tempo,&N);
	Horario horario[N];
 	for (int i = 0;i < N;i++) {
		scanf("%d:%d",&hora, &minuto);
		scanf(" %[^\n]", nome1);
		int restante;
		if (hora == 23) {
			restante = 60-minuto;
			if (restante <= tempo) {
				strcpy(horario[p].nome, nome1);
				horario[p].hora = hora;
				horario[p++].minuto = minuto;
			}
		}
		else if (hora == 0) {
			if (minuto <= tempo) {
				strcpy(horario[p].nome, nome1);
				horario[p].hora = hora;
				horario[p++].minuto = minuto;
			}
		}
	}
	sort(horario, horario + p, compara);
	
	for (int i = 0;i < p;i++)
		printf("%s\n", horario[i].nome);
    return 0;
}
