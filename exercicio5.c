#include <stdio.h>
#include <string.h>

int main() {
    char str[10000], temp;
    int i, j;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("String invertida: %s\n", str);

    return 0;
}
