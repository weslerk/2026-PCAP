/* 1178 - Preenchimento de Vetor III: guardo o termo atual antes de reduzi-lo. */
#include <stdio.h>

enum { TERMOS = 100 };

int main(void) {
    double termo;
    if (scanf("%lf", &termo) != 1) {
        return 0;
    }

    double sequencia[TERMOS];
    for (int posicao = 0; posicao < TERMOS; ++posicao) {
        sequencia[posicao] = termo;
        termo *= 0.5;
    }

    for (int posicao = 0; posicao < TERMOS; ++posicao) {
        printf("N[%d] = %.4f\n", posicao, sequencia[posicao]);
    }

    return 0;
}
