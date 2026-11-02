/* Beecrowd 1172 - Substituicao em Vetor I. Autor: Wesley. */
#include <stdio.h>
#define TAMANHO 10

int main(void) {
    int x[TAMANHO], i;

    for (i = 0; i < TAMANHO; i++) {
        if (scanf("%d", &x[i]) != 1) {
            return 0;
        }
        if (x[i] <= 0) {
            x[i] = 1;
        }
    }
    for (i = 0; i < TAMANHO; i++) {
        printf("X[%d] = %d\n", i, x[i]);
    }
    return 0;
}
