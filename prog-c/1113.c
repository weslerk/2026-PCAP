/* 1113 - Crescente e Decrescente: o primeiro par igual encerra a leitura. */
#include <stdio.h>

int main(void) {
    for (;;) {
        int primeiro, segundo;
        if (scanf("%d %d", &primeiro, &segundo) != 2) {
            break;
        }
        if (primeiro == segundo) {
            break;
        }

        puts(primeiro > segundo ? "Decrescente" : "Crescente");
    }

    return 0;
}
