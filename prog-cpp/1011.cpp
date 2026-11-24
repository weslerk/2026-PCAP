// Beecrowd 1011 - Esfera
// LIAC: Leio o raio, calculo o volume da esfera e mostro tres casas.
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159;
    int raio;
    cin >> raio;
    double volume = (4.0 / 3.0) * pi * raio * raio * raio;
    cout << "VOLUME = " << fixed << setprecision(3) << volume << '\n';
}
