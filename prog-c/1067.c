/* Beecrowd 1067 - Numeros Impares. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    int limite, i;

    if (scanf("%d", &limite) != 1) {
        return 0;
    }
    for (i = 1; i <= limite; i = i + 2) {
        printf("%d\n", i);
    }
    return 0;
}
