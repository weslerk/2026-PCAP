/* 1043 - Triangulo: testo o maior lado contra a soma dos outros dois. */
#include <stdio.h>

int main(void) {
    double medidas[3];
    if (scanf("%lf %lf %lf", &medidas[0], &medidas[1], &medidas[2]) != 3) {
        return 0;
    }

    int maior = 0;
    for (int i = 1; i < 3; ++i) {
        if (medidas[i] > medidas[maior]) {
            maior = i;
        }
    }

    double soma_dos_menores = medidas[(maior + 1) % 3] + medidas[(maior + 2) % 3];
    if (medidas[maior] < soma_dos_menores) {
        printf("Perimetro = %.1f\n", medidas[0] + medidas[1] + medidas[2]);
    } else {
        double area = (medidas[0] + medidas[1]) * medidas[2] / 2.0;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
