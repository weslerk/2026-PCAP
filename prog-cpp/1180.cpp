// Beecrowd 1180 - Menor e Posicao
// LIAC: Guardo os numeros e acompanho a primeira posicao do menor.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int qtd;
    cin >> qtd;
    vector<int> valores(qtd);
    for (int &valor : valores) {
        cin >> valor;
    }
    int posicao = 0;
    for (int i = 1; i < qtd; i++) {
        if (valores[i] < valores[posicao]) {
            posicao = i;
        }
    }
    cout << "Menor valor: " << valores[posicao] << '\n';
    cout << "Posicao: " << posicao << '\n';
}
