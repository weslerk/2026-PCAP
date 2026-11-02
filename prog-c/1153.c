/* Beecrowd 1153 - Fatorial Simples. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    int numero, i;
    long long fatorial = 1;

    if (scanf("%d", &numero) != 1) {
        return 0;
    }
    for (i = 2; i <= numero; i++) {
        fatorial = fatorial * i;
    }
    printf("%lld\n", fatorial);
    return 0;
}
