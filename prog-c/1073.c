/* Beecrowd 1073 - Quadrado de Pares. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    int limite, i;

    if (scanf("%d", &limite) != 1) {
        return 0;
    }
    for (i = 2; i <= limite; i = i + 2) {
        printf("%d^2 = %d\n", i, i * i);
    }
    return 0;
}
