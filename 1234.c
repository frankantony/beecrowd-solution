#include<stdio.h>
#include<string.h>

int main() {
	char string;
	int i,cont = 1;
	while(scanf("%c",&string) != EOF) {
				if (string == '\n') {
					cont = 1;
					printf("\n");
				}
			else{
				if (string == ' ') {
					printf(" ");
				}
				else {
					char converte = string + 'A'-'a';
					if (cont % 2 != 0) {
						if (string >= 'A' && string <= 'Z')
							printf("%c",string);
						else
							printf("%c",converte);
					}
					else {
						if (string >= 'a' && string <= 'z')
							printf("%c",string);
						else
							printf("%c",string + 32);
					}
					cont++;
				}
			}
	}
    return 0;
}
