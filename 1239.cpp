#include <cstdio>
#include <cstring>

int main() {
    char entrada[60];
    int tam, italico = 0, negrito = 0, i;
    while (fgets(entrada, 50, stdin)) {
        tam = strlen(entrada);
        for (i = 0; i < tam; i++) {
            if (entrada[i] == '_') {
                italico++;
                if (italico % 2)
                    printf("<i>");
                else
                    printf("</i>");
            }
            else if (entrada[i] == '*') {
                negrito++;
                if (negrito % 2)
                    printf("<b>");
                else
                    printf("</b>");
            }
            else
                printf("%c", entrada[i]);
        }
    }
    return 0;
}
