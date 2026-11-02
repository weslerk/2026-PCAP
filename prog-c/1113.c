/* Beecrowd 1113 - Crescente e Decrescente. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    int x, y;

    while (scanf("%d %d", &x, &y) == 2 && x != y) {
        if (x < y) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
    }
    return 0;
}
