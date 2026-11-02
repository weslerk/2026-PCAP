/* Beecrowd 1078 - Tabuada. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    int numero, i;

    if (scanf("%d", &numero) != 1) {
        return 0;
    }
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, numero, i * numero);
    }
    return 0;
}
