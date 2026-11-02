/* Beecrowd 1164 - Numero Perfeito. Autor: Wesley. */
#include <stdio.h>

int eh_perfeito(int numero) {
    int soma = 1, divisor, outro;
    if (numero <= 1) {
        return 0;
    }
    for (divisor = 2; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0) {
            outro = numero / divisor;
            soma = soma + divisor;
            if (outro != divisor) {
                soma = soma + outro;
            }
        }
    }
    return soma == numero;
}

int main(void) {
    int casos, numero, i;
    if (scanf("%d", &casos) != 1) {
        return 0;
    }
    for (i = 0; i < casos; i++) {
        if (scanf("%d", &numero) != 1) {
            return 0;
        }
        if (eh_perfeito(numero)) {
            printf("%d eh perfeito\n", numero);
        } else {
            printf("%d nao eh perfeito\n", numero);
        }
    }
    return 0;
}
