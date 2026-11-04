/*
 * Disciplina: 2026-PCAP
 * Projeto: MeuApp v3.0 - Fliperama em C (Aulas 28 e 29)
 * Autor: Wesley
 * LIAC: O menu cadastra jogadores, lista e abre o Adivinhe.
 * Um vetor guarda os apelidos e outro guarda as partidas.
 * O cadastro fica no arquivo ao sair e volta quando abre.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define DONO "Wesley"
#define CAPACIDADE 50
#define TAM_APELIDO 20
#define ARQUIVO "jogadores.csv"

void linha(void) {
    printf("========================================\n");
}

void titulo(char nome_tela[]) {
    linha();
    printf("   %s\n", nome_tela);
    linha();
}

/* Limpa o que sobrou da linha digitada. */
void limpar_entrada(void) {
    int letra;
    while ((letra = getchar()) != '\n' && letra != EOF) {
    }
}

int ler_numero(char pergunta[], int menor_valor, int maior_valor) {
    int valor, leitura;
    printf("%s: ", pergunta);
    leitura = scanf("%d", &valor);
    while (leitura != 1 || valor < menor_valor || valor > maior_valor) {
        if (leitura == EOF) {
            printf("\nEntrada encerrada.\n");
            exit(EXIT_SUCCESS);
        }
        limpar_entrada();
        printf("Opcao invalida! Tente de novo: ");
        leitura = scanf("%d", &valor);
    }
    limpar_entrada();
    return valor;
}

void ler_texto(char pergunta[], char resposta[]) {
    int leitura;
    printf("%s: ", pergunta);
    leitura = scanf("%19s", resposta); /* 19 caracteres e o '\0'. */
    if (leitura != 1) {
        printf("\nEntrada encerrada.\n");
        exit(EXIT_SUCCESS);
    }
    limpar_entrada();
}

int buscar(char nomes[][TAM_APELIDO], int total, char nome_busca[]) {
    int indice;
    for (indice = 0; indice < total; indice++) {
        if (strcmp(nomes[indice], nome_busca) == 0) {
            return indice;
        }
    }
    return -1;
}

int cadastrar(char nomes[][TAM_APELIDO], int jogos[], int total) {
    char novo_nome[TAM_APELIDO];
    titulo("NOVO JOGADOR");
    if (total >= CAPACIDADE) {
        printf("Cadastro cheio: nao cabe mais ninguem.\n");
        return total;
    }
    ler_texto("Apelido (sem espacos)", novo_nome);
    if (strchr(novo_nome, ',') != NULL) {
        printf("O apelido nao pode conter virgula.\n");
        return total;
    }
    if (buscar(nomes, total, novo_nome) != -1) {
        printf("Esse apelido ja esta cadastrado.\n");
        return total;
    }
    strcpy(nomes[total], novo_nome);
    jogos[total] = 0;
    printf("Jogador %s cadastrado.\n", novo_nome);
    return total + 1;
}

void listar(char nomes[][TAM_APELIDO], int jogos[], int total) {
    int indice;
    titulo("JOGADORES CADASTRADOS");
    if (total == 0) {
        printf("Nenhum jogador cadastrado ainda.\n");
    }
    for (indice = 0; indice < total; indice++) {
        printf("%s | %d partidas\n", nomes[indice], jogos[indice]);
    }
}

void jogar_adivinhe(char nomes[][TAM_APELIDO], int jogos[], int total) {
    char jogador[TAM_APELIDO];
    int posicao, sorteado, chute, chances;
    titulo("ADIVINHE O NUMERO");
    ler_texto("Quem vai jogar", jogador);
    posicao = buscar(nomes, total, jogador);
    if (posicao == -1) {
        printf("Cadastre esse apelido antes de jogar.\n");
        return;
    }
    jogos[posicao] = jogos[posicao] + 1;
    sorteado = rand() % 100 + 1;
    printf("Pensei num numero de 1 a 100.\n");
    chute = ler_numero("Seu palpite", 1, 100);
    chances = 1;
    while (chute != sorteado) {
        if (chute < sorteado) {
            printf("Maior!\n");
        } else {
            printf("Menor!\n");
        }
        chute = ler_numero("Seu palpite", 1, 100);
        chances = chances + 1;
    }
    printf("Acertou em %d tentativas, %s!\n", chances, jogador);
}

void salvar(char nomes[][TAM_APELIDO], int jogos[], int total) {
    FILE *dados = fopen(ARQUIVO, "w");
    int indice;
    if (dados == NULL) {
        perror("Nao foi possivel salvar o cadastro");
        exit(EXIT_FAILURE);
    }
    for (indice = 0; indice < total; indice++) {
        if (fprintf(dados, "%s,%d\n", nomes[indice], jogos[indice]) < 0) {
            perror("Erro ao gravar o cadastro");
            fclose(dados);
            exit(EXIT_FAILURE);
        }
    }
    if (fclose(dados) != 0) {
        perror("Erro ao fechar o cadastro");
        exit(EXIT_FAILURE);
    }
}

int carregar(char nomes[][TAM_APELIDO], int jogos[]) {
    FILE *dados = fopen(ARQUIVO, "r");
    int total = 0;
    if (dados == NULL) {
        return 0; /* Primeira execucao: cadastro vazio. */
    }
    while (total < CAPACIDADE &&
           fscanf(dados, "%19[^,],%d\n", nomes[total], &jogos[total]) == 2) {
        total = total + 1;
    }
    fclose(dados);
    return total;
}

void mostrar_menu(void) {
    linha();
    printf("   FLIPERAMA DO %s\n", DONO);
    linha();
    printf("[1] Adivinhe o Numero\n");
    printf("[2] Cadastrar jogador\n");
    printf("[3] Listar jogadores\n");
    printf("[0] Sair\n");
    linha();
}

int main(void) {
    char nomes[CAPACIDADE][TAM_APELIDO];
    int jogos[CAPACIDADE];
    int total, escolha;
    srand((unsigned int)time(NULL));
    total = carregar(nomes, jogos);
    mostrar_menu();
    escolha = ler_numero("Sua escolha", 0, 3);
    while (escolha != 0) {
        if (escolha == 1) {
            jogar_adivinhe(nomes, jogos, total);
        } else if (escolha == 2) {
            total = cadastrar(nomes, jogos, total);
        } else {
            listar(nomes, jogos, total);
        }
        mostrar_menu();
        escolha = ler_numero("Sua escolha", 0, 3);
    }
    salvar(nomes, jogos, total);
    titulo("Ate a proxima!");
    return 0;
}
