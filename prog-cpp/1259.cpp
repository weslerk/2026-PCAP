// Beecrowd 1259 - Pares e Impares Ordenados
// LIAC: Separo pares de impares e ordeno cada grupo no sentido pedido.
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int qtd;
    cin >> qtd;
    vector<int> pares, impares;
    for (int i = 0; i < qtd; i++) {
        int numero;
        cin >> numero;
        if (numero % 2 == 0) {
            pares.push_back(numero);
        } else {
            impares.push_back(numero);
        }
    }
    sort(pares.begin(), pares.end());
    sort(impares.rbegin(), impares.rend());
    for (int numero : pares) {
        cout << numero << '\n';
    }
    for (int numero : impares) {
        cout << numero << '\n';
    }
}
