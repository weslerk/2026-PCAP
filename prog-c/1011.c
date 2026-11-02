/* Beecrowd 1011 - Esfera. Autor: Wesley. */
#include <stdio.h>

int main(void) {
    const double PI = 3.14159;
    double raio, volume;

    if (scanf("%lf", &raio) != 1) {
        return 0;
    }
    volume = (4.0 / 3.0) * PI * raio * raio * raio;
    printf("VOLUME = %.3f\n", volume);
    return 0;
}
