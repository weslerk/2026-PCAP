/* Beecrowd 1002 - Area do Circulo. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    const double PI = 3.14159;
    double raio, area;

    if (scanf("%lf", &raio) != 1) {
        return 0;
    }
    area = PI * raio * raio;
    printf("A=%.4f\n", area);
    return 0;
}
