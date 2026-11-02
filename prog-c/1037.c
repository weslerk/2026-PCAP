/* Beecrowd 1037 - Intervalo. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    double valor;

    if (scanf("%lf", &valor) != 1) {
        return 0;
    }
    if (valor < 0 || valor > 100) {
        printf("Fora de intervalo\n");
    } else if (valor <= 25) {
        printf("Intervalo [0,25]\n");
    } else if (valor <= 50) {
        printf("Intervalo (25,50]\n");
    } else if (valor <= 75) {
        printf("Intervalo (50,75]\n");
    } else {
        printf("Intervalo (75,100]\n");
    }
    return 0;
}
