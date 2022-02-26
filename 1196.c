#include <stdio.h>
#include<string.h>
 
int main() {

char caracteres[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c;
	int i;
	
	while(scanf("%c",&c)!=EOF) {
	
		for (i=0; i<48; i++) {
			if (c == caracteres[i]) {
				printf("%c",caracteres[i-1]);
				break;
			}
			else if (c == ' ') {
				printf(" ");
				break;
			}
			else if (c == '\n') {
				printf("\n");
				break;
			}
		}
	}
	return 0;
}

