/* Beecrowd 1180 - Menor e Posicao. Autor: Wesley. */
#include <stdio.h>
#define CAPACIDADE 1000

int main(void) {
    int x[CAPACIDADE], qtd, i, posicao = 0;

    if (scanf("%d", &qtd) != 1 || qtd < 1 || qtd > CAPACIDADE) {
        return 0;
    }
    for (i = 0; i < qtd; i++) {
        if (scanf("%d", &x[i]) != 1) {
            return 0;
        }
    }
    for (i = 1; i < qtd; i++) {
        if (x[i] < x[posicao]) {
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", x[posicao]);
    printf("Posicao: %d\n", posicao);
    return 0;
}
