/* 1073 - Quadrado de Pares: conto quantos pares cabem e monto cada um. */
#include <stdio.h>

int main(void) {
    int teto;
    if (scanf("%d", &teto) != 1) {
        return 0;
    }

    int quantidade = teto / 2;
    for (int posicao = 1; posicao <= quantidade; ++posicao) {
        long long par = 2LL * posicao;
        printf("%lld^2 = %lld\n", par, par * par);
    }

    return 0;
}
