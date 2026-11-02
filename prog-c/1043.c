/* Beecrowd 1043 - Triangulo. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        return 0;
    }
    if (a + b > c && a + c > b && b + c > a) {
        printf("Perimetro = %.1f\n", a + b + c);
    } else {
        printf("Area = %.1f\n", (a + b) * c / 2.0);
    }
    return 0;
}
