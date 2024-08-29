#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, count = 0;

    printf("Escreva a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Número de vogais na string: %d\n", count);

    return 0;
}
