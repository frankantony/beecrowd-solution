#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	
	int casos, N;
	char idioma1[100], idioma2[100];
	scanf("%d",&casos);
	while(casos >= 1) {
		bool ingles = false;
		scanf("%d",&N);
		scanf(" %s", idioma1);
		for (int i = 0;i < N-1;i++) {
			scanf(" %s", idioma2);
			if (strcmp(idioma1, idioma2) != 0)
				ingles = true;
			strcpy(idioma1, idioma2);
		}
		if (ingles)
			printf("ingles\n");
		else
			printf("%s\n", idioma1);
	
		casos--;
	}
    return 0;
}
