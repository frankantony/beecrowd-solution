#include <stdio.h>
 
int main() {
	int v[] = {6,2,5,5,4,5,6,3,7,6},i,c;
	int N;
	scanf("%d",&N);
	while(N > 0) {
		int leds = 0;
		char s[1000];
		scanf("%s",s);
		for (i = 0; s[i] != '\0';i++) {
			c = s[i]-'0';
			leds += v[c];
		}
		printf("%d leds\n",leds);
		N--;
	}
    return 0;
}
