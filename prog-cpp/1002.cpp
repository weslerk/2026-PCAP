// Beecrowd 1002 - Area do Circulo
// LIAC: Leio o raio, calculo pi vezes o raio ao quadrado e mostro quatro casas.
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159;
    double raio;
    cin >> raio;
    double area = pi * raio * raio;
    cout << "A=" << fixed << setprecision(4) << area << '\n';
}
