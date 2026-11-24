/* 1164 - Numero Perfeito: calculo a soma dos divisores pela fatoracao. */
#include <stdio.h>

static long long soma_dos_divisores(int restante) {
    long long soma = 1;

    for (int fator = 2; fator <= restante / fator; ++fator) {
        long long potencia = 1;
        long long soma_das_potencias = 1;
        while (restante % fator == 0) {
            restante /= fator;
            potencia *= fator;
            soma_das_potencias += potencia;
        }
        soma *= soma_das_potencias;
    }

    if (restante > 1) {
        soma *= 1LL + restante;
    }
    return soma;
}

int main(void) {
    int quantidade;
    if (scanf("%d", &quantidade) != 1) {
        return 0;
    }

    for (int caso = 0; caso < quantidade; ++caso) {
        int numero;
        if (scanf("%d", &numero) != 1) {
            break;
        }

        /* O proprio numero entra na soma, por isso comparo com o dobro. */
        int perfeito = numero > 1 && soma_dos_divisores(numero) == 2LL * numero;
        printf("%d %seh perfeito\n", numero, perfeito ? "" : "nao ");
    }

    return 0;
}
