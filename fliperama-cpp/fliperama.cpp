/*
 * Disciplina: 2026-PCAP
 * Projeto: MeuApp v4.0 - Fliperama em C++ (Aula 32)
 * Autor: Wesley
 * LIAC: O menu le uma opcao e usa dois vectors para guardar os jogadores.
 * Um vector tem os apelidos, e o outro tem as partidas na mesma ordem.
 * O Adivinhe so conta a partida do jogador que termina o jogo.
 * O CSV guarda um apelido e seu numero de partidas por linha.
 */
#include <cstdlib>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define DONO "Wesley"
#define ARQUIVO "jogadores.csv"

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

bool apelido_valido(const string &apelido) {
    return !apelido.empty() && apelido.find_first_of(" \t\r\n\v\f,") == string::npos;
}

bool ler_apelido(const string &pergunta, string &apelido) {
    cout << pergunta << ": ";
    if (!getline(cin, apelido)) {
        return false;
    }
    if (!apelido_valido(apelido)) {
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
    if (buscar(apelidos, novo) != -1) {
        cout << "Esse apelido ja esta cadastrado.\n";
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

bool salvar(const vector<string> &apelidos, const vector<int> &partidas) {
    const string temporario = string(ARQUIVO) + ".tmp";
    ofstream dados(temporario);
    if (!dados) {
        cerr << "Nao foi possivel abrir o arquivo para salvar o cadastro.\n";
        return false;
    }

    int qtd = static_cast<int>(apelidos.size());
    for (int i = 0; i < qtd; i++) {
        dados << apelidos[i] << ',' << partidas[i] << '\n';
    }
    dados.close();

    error_code erro;
    if (dados) {
        filesystem::rename(temporario, ARQUIVO, erro);
        if (!erro) {
            return true;
        }
    }
    filesystem::remove(temporario, erro);
    cerr << "Nao foi possivel salvar o cadastro.\n";
    return false;
}

bool carregar(vector<string> &apelidos, vector<int> &partidas) {
    ifstream dados(ARQUIVO);
    if (!dados) {
        error_code erro;
        if (!filesystem::exists(ARQUIVO, erro) && !erro) {
            return true;
        }
        cerr << "Nao foi possivel abrir o cadastro.\n";
        return false;
    }

    string registro;
    while (getline(dados, registro)) {
        istringstream linha_csv(registro);
        string apelido;
        int total_partidas;
        char sobra;
        if (getline(linha_csv, apelido, ',') && apelido_valido(apelido) &&
            linha_csv >> total_partidas && total_partidas >= 0 && !(linha_csv >> sobra) &&
            buscar(apelidos, apelido) == -1) {
            apelidos.push_back(apelido);
            partidas.push_back(total_partidas);
        }
    }
    if (!dados.eof() || dados.bad()) {
        cerr << "Nao foi possivel ler o cadastro completo.\n";
        return false;
    }
    return true;
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
    if (!carregar(apelidos, partidas)) {
        return EXIT_FAILURE;
    }
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
    if (!salvar(apelidos, partidas)) {
        return EXIT_FAILURE;
    }
    titulo("Ate a proxima!");
}
