/*
 * Disciplina: 2026-PCAP
 * Projeto: MeuApp v4.0 - Fliperama em C++ (Aula 32)
 * Autor: Wesley
 * LIAC: O menu le uma opcao e usa dois vectors para guardar os jogadores.
 * Um vector tem os apelidos, e o outro tem as partidas na mesma ordem.
 */
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
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

bool ler_apelido(const string &pergunta, string &apelido) {
    cout << pergunta << ": ";
    if (!getline(cin, apelido)) {
        return false;
    }
    if (apelido.empty() || apelido.find_first_of(" \t\r\n\v\f,") != string::npos) {
        cout << "O apelido nao pode conter espacos ou virgula nem ficar vazio.\n";
        return false;
    }
    return true;
}

void cadastrar(vector<string> &apelidos, vector<int> &partidas) {
    titulo("NOVO JOGADOR");
    string novo;
    if (!ler_apelido("Apelido (sem espacos)", novo)) {
        return;
    }
    apelidos.push_back(novo);
    partidas.push_back(0);
    cout << "Jogador " << novo << " cadastrado.\n";
}

void listar(const vector<string> &apelidos, const vector<int> &partidas) {
    titulo("JOGADORES CADASTRADOS");
    int qtd = static_cast<int>(apelidos.size());
    if (qtd == 0) {
        cout << "Nenhum jogador cadastrado ainda.\n";
    }
    for (int i = 0; i < qtd; i++) {
        cout << apelidos[i] << " | " << partidas[i] << " partidas\n";
    }
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
    vector<string> apelidos;
    vector<int> partidas;
    while (true) {
        mostrar_menu();
        int escolha = ler_numero("Sua escolha", 0, 3);
        if (escolha <= 0) {
            break;
        }
        if (escolha == 1) {
            cout << "Adivinhe o Numero\n";
        } else if (escolha == 2) {
            cadastrar(apelidos, partidas);
        } else {
            listar(apelidos, partidas);
        }
    }
    titulo("Ate a proxima!");
}
