// Beecrowd 1332 - Um-Dois-Tres
// LIAC: Uso o tamanho e as letras corretas para identificar cada palavra.
#include <iostream>
#include <string>
using namespace std;

int main() {
    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++) {
        string palavra;
        cin >> palavra;
        if (palavra.size() == 5) {
            cout << "3\n";
        } else {
            int acertos = (palavra[0] == 'o') + (palavra[1] == 'n') + (palavra[2] == 'e');
            cout << (acertos >= 2 ? 1 : 2) << '\n';
        }
    }
}
