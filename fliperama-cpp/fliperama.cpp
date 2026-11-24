/*
 * Disciplina: 2026-PCAP
 * Projeto: MeuApp v4.0 - Fliperama em C++ (Aula 32)
 * Autor: Wesley
 * LIAC: O menu le uma opcao e usa dois vectors para guardar os jogadores.
 * Um vector tem os apelidos, e o outro tem as partidas na mesma ordem.
 * O Adivinhe so conta a partida do jogador que termina o jogo.
 */
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
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

int buscar(const vector<string> &apelidos, const string &procurado) {
    int qtd = static_cast<int>(apelidos.size());
    for (int i = 0; i < qtd; i++) {
        if (apelidos[i] == procurado) {
            return i;
        }
    }
    return -1;
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

void jogar_adivinhe(const vector<string> &apelidos, vector<int> &partidas) {
    titulo("ADIVINHE O NUMERO");
    string jogador;
    if (!ler_apelido("Quem vai jogar", jogador)) {
        return;
    }
    int posicao = buscar(apelidos, jogador);
    if (posicao == -1) {
        cout << "Cadastre esse apelido antes de jogar.\n";
        return;
    }

    int sorteado = rand() % 100 + 1;
    int tentativas = 0;
    cout << "Pensei num numero de 1 a 100.\n";
    while (true) {
        int palpite = ler_numero("Seu palpite", 1, 100);
        if (palpite == -1) {
            return;
        }
        tentativas++;
        if (palpite == sorteado) {
            break;
        }
        cout << (palpite < sorteado ? "Maior!\n" : "Menor!\n");
    }
    if (partidas[posicao] < numeric_limits<int>::max()) {
        partidas[posicao]++;
    }
    cout << "Acertou em " << tentativas << " tentativas, " << jogador << "!\n";
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
    srand(static_cast<unsigned int>(time(nullptr)));
    vector<string> apelidos;
    vector<int> partidas;
    while (true) {
        mostrar_menu();
        int escolha = ler_numero("Sua escolha", 0, 3);
        if (escolha <= 0) {
            break;
        }
        if (escolha == 1) {
            jogar_adivinhe(apelidos, partidas);
        } else if (escolha == 2) {
            cadastrar(apelidos, partidas);
        } else {
            listar(apelidos, partidas);
        }
    }
    titulo("Ate a proxima!");
}
