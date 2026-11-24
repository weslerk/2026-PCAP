// Beecrowd 1548 - Fila do Recreio
// LIAC: Ordeno uma copia das notas e conto as posicoes que ficaram iguais.
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int contar_mesmas_posicoes(const vector<int> &fila) {
    vector<int> ordenada = fila;
    sort(ordenada.rbegin(), ordenada.rend());

    int qtd = static_cast<int>(fila.size());
    int iguais = 0;
    for (int i = 0; i < qtd; i++) {
        if (fila[i] == ordenada[i]) {
            iguais++;
        }
    }
    return iguais;
}

int main() {
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++) {
        int qtd;
        cin >> qtd;
        vector<int> fila(qtd);
        for (int &nota : fila) {
            cin >> nota;
        }
        cout << contar_mesmas_posicoes(fila) << '\n';
    }
}
