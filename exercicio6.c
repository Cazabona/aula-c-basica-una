#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int num;
    printf("Fale o numero: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, fatorial(num));

    return 0;
}
