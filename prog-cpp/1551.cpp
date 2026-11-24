// Beecrowd 1551 - Frase Completa
// LIAC: Conto quantas letras diferentes aparecem em cada linha.
#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
    int casos;
    cin >> casos;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < casos; i++) {
        string frase;
        getline(cin, frase);
        bool vistas[26] = {};
        int diferentes = 0;
        for (char letra : frase) {
            if (letra >= 'a' && letra <= 'z' && !vistas[letra - 'a']) {
                vistas[letra - 'a'] = true;
                diferentes++;
            }
        }
        if (diferentes == 26) {
            cout << "frase completa\n";
        } else if (diferentes >= 13) {
            cout << "frase quase completa\n";
        } else {
            cout << "frase mal elaborada\n";
        }
    }
}
