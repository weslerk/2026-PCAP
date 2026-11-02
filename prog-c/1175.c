/* Beecrowd 1175 - Troca em Vetor I. Autor: Wesley. */
#include <stdio.h>
#define TAMANHO 20

int main(void) {
    int n[TAMANHO], i, auxiliar;

    for (i = 0; i < TAMANHO; i++) {
        if (scanf("%d", &n[i]) != 1) {
            return 0;
        }
    }
    for (i = 0; i < TAMANHO / 2; i++) {
        auxiliar = n[i];
        n[i] = n[TAMANHO - 1 - i];
        n[TAMANHO - 1 - i] = auxiliar;
    }
    for (i = 0; i < TAMANHO; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}
