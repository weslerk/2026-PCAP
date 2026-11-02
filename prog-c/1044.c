/* Beecrowd 1044 - Multiplos. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 0;
    }
    if ((a != 0 && b % a == 0) || (b != 0 && a % b == 0)) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
