/*
 * Disciplina: 2026-PCAP
 * Projeto: MeuApp v4.0 - Fliperama em C++ (Aula 32)
 * Autor: Wesley
 * LIAC: O menu le uma opcao e so aceita os numeros mostrados na tela.
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#define DONO "Wesley"

void linha() {
    cout << "========================================\n";
}

void titulo(const string &nome_tela) {
    linha();
    cout << "   " << nome_tela << '\n';
    linha();
}

int ler_numero(const string &pergunta, int menor, int maior) {
    cout << pergunta << ": ";
    string entrada;
    while (getline(cin, entrada)) {
        istringstream texto(entrada);
        int numero;
        char sobra;
        if (texto >> numero && !(texto >> sobra) &&
            numero >= menor && numero <= maior) {
            return numero;
        }
        cout << "Opcao invalida! Tente de novo: ";
    }
    return -1;
}

void mostrar_menu() {
    titulo("FLIPERAMA DO " DONO);
    cout << "[1] Adivinhe o Numero\n";
    cout << "[2] Cadastrar jogador\n";
    cout << "[3] Listar jogadores\n";
    cout << "[0] Sair\n";
    linha();
}

int main() {
    while (true) {
        mostrar_menu();
        int escolha = ler_numero("Sua escolha", 0, 3);
        if (escolha <= 0) {
            break;
        }
        cout << "Opcao " << escolha << " escolhida.\n";
    }
    titulo("Ate a proxima!");
}
