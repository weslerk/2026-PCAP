// Beecrowd 2165 - Tuitando
// LIAC: Leio a linha inteira e comparo seu tamanho com 140.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string mensagem;
    getline(cin, mensagem);
    cout << (mensagem.size() <= 140 ? "TWEET" : "MUTE") << '\n';
}
