/* Beecrowd 1165 - Numero Primo. Autor: Wesley. */
#include <stdio.h>

int eh_primo(int numero) {
    int divisor;
    if (numero < 2) {
        return 0;
    }
    /* Basta procurar divisores ate a raiz do numero. */
    for (divisor = 2; divisor <= numero / divisor; divisor++) {
        if (numero % divisor == 0) {
            return 0;
        }
    }
    return 1;
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
        if (eh_primo(numero)) {
            printf("%d eh primo\n", numero);
        } else {
            printf("%d nao eh primo\n", numero);
        }
    }
    return 0;
}
