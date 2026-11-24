/* 1153 - Fatorial Simples: acumulo o produto do numero ate chegar a um. */
#include <stdio.h>

int main(void) {
    int fator;
    if (scanf("%d", &fator) != 1) {
        return 0;
    }

    unsigned long long produto = 1;
    while (fator > 1) {
        produto *= fator;
        --fator;
    }
    printf("%llu\n", produto);

    return 0;
}
