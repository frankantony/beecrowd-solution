#include <stdio.h>
 
int main() {
	int n,i, soma;
	scanf("%d",&n);
	for (i = 0;i < n;i++) {
		char string[4];
		scanf("%s",&string);
//		printf("%s\n",string);
		if ((string[2]-'0') == (string[0]-'0')) 
			soma = (string[2]-'0')*(string[0]-'0');
		else if (string[1] >= 'a' && string[1] <= 'z')
			soma = (string[2]-'0') + (string[0]-'0');
		else if (string[1] >= 'A' && string[1] <= 'Z')
			soma = (string[2]-'0') - (string[0]-'0');
		printf("%d\n", soma);
	}
 
    return 0;
}
