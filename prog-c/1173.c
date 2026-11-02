/* Beecrowd 1173 - Preenchimento de Vetor I. Autor: Wesley. */
#include <stdio.h>
#define TAMANHO 10

int main(void) {
    int n[TAMANHO], i;

    if (scanf("%d", &n[0]) != 1) {
        return 0;
    }
    for (i = 1; i < TAMANHO; i++) {
        n[i] = n[i - 1] * 2;
    }
    for (i = 0; i < TAMANHO; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}
