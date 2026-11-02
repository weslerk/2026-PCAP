/* Beecrowd 1178 - Preenchimento de Vetor III. Autor: Wesley. */
#include <stdio.h>
#define TAMANHO 100

int main(void) {
    double n[TAMANHO];
    int i;

    if (scanf("%lf", &n[0]) != 1) {
        return 0;
    }
    for (i = 1; i < TAMANHO; i++) {
        n[i] = n[i - 1] / 2.0;
    }
    for (i = 0; i < TAMANHO; i++) {
        printf("N[%d] = %.4f\n", i, n[i]);
    }
    return 0;
}
