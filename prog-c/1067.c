/* 1067 - Numeros Impares: uso o resto da divisao por dois como filtro. */
#include <stdio.h>

int main(void) {
    int fim;
    if (scanf("%d", &fim) != 1) {
        return 0;
    }

    for (long long valor = 1; valor <= fim; ++valor) {
        if (valor % 2 != 0) {
            printf("%lld\n", valor);
        }
    }

    return 0;
}
