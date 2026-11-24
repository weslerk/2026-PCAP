/* 1179 - Preenchimento de Vetor IV: cada paridade tem um grupo de cinco. */
#include <stdio.h>

enum { PAR = 0, IMPAR = 1, LIMITE_GRUPO = 5, TOTAL = 15 };

static void mostrar_grupo(const char *nome, const int numeros[], int quantidade) {
    for (int indice = 0; indice < quantidade; ++indice) {
        printf("%s[%d] = %d\n", nome, indice, numeros[indice]);
    }
}

int main(void) {
    int grupos[2][LIMITE_GRUPO];
    int ocupados[2] = {0};
    const char *nomes[] = {"par", "impar"};

    for (int lidos = 0; lidos < TOTAL; ++lidos) {
        int numero;
        if (scanf("%d", &numero) != 1) {
            return 0;
        }

        int grupo = numero % 2 == 0 ? PAR : IMPAR;
        grupos[grupo][ocupados[grupo]] = numero;
        ++ocupados[grupo];
        if (ocupados[grupo] == LIMITE_GRUPO) {
            mostrar_grupo(nomes[grupo], grupos[grupo], LIMITE_GRUPO);
            ocupados[grupo] = 0;
        }
    }

    mostrar_grupo(nomes[IMPAR], grupos[IMPAR], ocupados[IMPAR]);
    mostrar_grupo(nomes[PAR], grupos[PAR], ocupados[PAR]);
    return 0;
}
