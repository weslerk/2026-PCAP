/* Beecrowd 1041 - Coordenadas de um Ponto. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    double x, y;

    if (scanf("%lf %lf", &x, &y) != 2) {
        return 0;
    }
    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Q1\n");
    } else if (x < 0 && y > 0) {
        printf("Q2\n");
    } else if (x < 0 && y < 0) {
        printf("Q3\n");
    } else {
        printf("Q4\n");
    }
    return 0;
}
