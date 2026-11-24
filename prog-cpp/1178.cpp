// Beecrowd 1178 - Preenchimento de Vetor III
// LIAC: Guardo o valor lido e vou dividindo por dois ate ter cem posicoes.
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int qtd = 100;
    vector<double> valores(qtd);
    cin >> valores[0];
    for (int i = 1; i < qtd; i++) {
        valores[i] = valores[i - 1] / 2.0;
    }
    cout << fixed << setprecision(4);
    for (int i = 0; i < qtd; i++) {
        cout << "N[" << i << "] = " << valores[i] << '\n';
    }
}
