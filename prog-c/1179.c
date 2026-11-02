/* Beecrowd 1179 - Preenchimento de Vetor IV. Autor: Wesley. */
#include <stdio.h>
#define CAPACIDADE 5
#define TOTAL 15

void imprimir(char nome[], int vetor[], int qtd) {
    int i;
    for (i = 0; i < qtd; i++) {
        printf("%s[%d] = %d\n", nome, i, vetor[i]);
    }
}

int main(void) {
    int par[CAPACIDADE], impar[CAPACIDADE];
    int qtd_par = 0, qtd_impar = 0, numero, i;

    for (i = 0; i < TOTAL; i++) {
        if (scanf("%d", &numero) != 1) {
            return 0;
        }
        if (numero % 2 == 0) {
            par[qtd_par] = numero;
            qtd_par++;
            if (qtd_par == CAPACIDADE) {
                imprimir("par", par, qtd_par);
                qtd_par = 0;
            }
        } else {
            impar[qtd_impar] = numero;
            qtd_impar++;
            if (qtd_impar == CAPACIDADE) {
                imprimir("impar", impar, qtd_impar);
                qtd_impar = 0;
            }
        }
    }
    imprimir("impar", impar, qtd_impar);
    imprimir("par", par, qtd_par);
    return 0;
}
