/* 1175 - Troca em Vetor I: guardo a entrada do ultimo indice ao primeiro. */
#include <stdio.h>

enum { TAMANHO = 20 };

int main(void) {
    int invertidos[TAMANHO];
    for (int destino = TAMANHO - 1; destino >= 0; --destino) {
        if (scanf("%d", &invertidos[destino]) != 1) {
            return 0;
        }
    }

    for (int indice = 0; indice < TAMANHO; ++indice) {
        printf("N[%d] = %d\n", indice, invertidos[indice]);
    }

    return 0;
}
