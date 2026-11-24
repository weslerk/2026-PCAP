// Beecrowd 1173 - Preenchimento de Vetor I
// LIAC: O primeiro numero vem da entrada e cada proximo e o dobro do anterior.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int qtd = 10;
    vector<int> valores(qtd);
    cin >> valores[0];
    for (int i = 1; i < qtd; i++) {
        valores[i] = 2 * valores[i - 1];
    }
    for (int i = 0; i < qtd; i++) {
        cout << "N[" << i << "] = " << valores[i] << '\n';
    }
}
