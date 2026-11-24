// Beecrowd 1174 - Selecao em Vetor I
// LIAC: Leio os cem valores e mostro as posicoes que valem ate dez.
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int qtd = 100;
    vector<double> valores(qtd);
    for (double &valor : valores) {
        cin >> valor;
    }
    cout << fixed << setprecision(1);
    for (int i = 0; i < qtd; i++) {
        if (valores[i] <= 10.0) {
            cout << "A[" << i << "] = " << valores[i] << '\n';
        }
    }
}
