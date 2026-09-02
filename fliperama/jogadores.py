# ============================================================
# ARQUIVO   : jogadores.py (pasta fliperama)
# Disciplina: Pensamento Computacional, Algoritmos e Programacao
#             (2026-PCAP)
# Aula      : 22 - MeuApp v2.0: o cadastro de jogadores
# Autor     : Wesley
# Revisado  : Aula 23 - validacao de campo vazio e documentacao
# Conceitos : registro como lista de campos, cadastro como lista
#             de listas, cadastrar, listar, buscar, alterar,
#             excluir e persistencia em arquivo CSV
# ============================================================

from os.path import exists
from telas import titulo, linha
from modulos import ler_opcao, ler_texto


ARQUIVO = 'jogadores.csv'


def cadastrar(jogadores):
    '''
    Pergunta apelido e nome e acrescenta um jogador ao cadastro.

    Nao devolve nada: o cadastro muda no lugar.
    '''
    titulo('NOVO JOGADOR')

    apelido = ler_texto('Apelido (sem espacos)').lower()

    if buscar(jogadores, apelido) != -1:
        print('Esse apelido ja esta cadastrado.')
        linha()
        return

    nome = ler_texto('Nome completo')

    novo = [apelido, nome, '0']
    jogadores.append(novo)

    print('Jogador ' + apelido + ' cadastrado.')
    linha()


def listar(jogadores):
    '''Mostra o Top 10, ordenado do maior numero de partidas para o menor.'''
    titulo('TOP 10 JOGADORES')

    if len(jogadores) == 0:
        print('Nenhum jogador cadastrado ainda.')
    else:
        ranking = sorted(
            jogadores,
            key=lambda jogador: int(jogador[2]),
            reverse=True
        )

        for i in range(len(ranking[:10])):
            print(
                str(i + 1).rjust(2)
                + '. '
                + ranking[i][0].ljust(8)
                + ' | '
                + ranking[i][1].ljust(20)
                + ' | '
                + ranking[i][2].rjust(3)
                + ' partidas'
            )

    linha()


def buscar(jogadores, apelido):
    '''
    Procura um apelido no cadastro e diz ONDE ele esta.

    Parametros:
        jogadores (list) - o cadastro inteiro
        apelido (str) - o apelido procurado, em minusculas

    Retorno:
        int - a posicao do jogador na lista, ou -1 se nao achar
    '''
    for i in range(len(jogadores)):
        if jogadores[i][0] == apelido:
            return i

    return -1


def alterar(jogadores):
    '''Altera o nome de um jogador encontrado pelo apelido.'''
    listar(jogadores)

    apelido = ler_texto('Apelido de quem vai mudar de nome').lower()
    i = buscar(jogadores, apelido)

    if i == -1:
        print('Nao achei ninguem com esse apelido.')
    else:
        print('Nome atual: ' + jogadores[i][1])
        jogadores[i][1] = ler_texto('Nome novo')
        print('Pronto. Agora e ' + jogadores[i][1] + '.')

    linha()


def excluir(jogadores):
    '''
    Apaga a ficha de um jogador, pedindo confirmacao antes.
    '''
    listar(jogadores)

    apelido = ler_texto('Apelido de quem vai sair do cadastro').lower()
    i = buscar(jogadores, apelido)

    if i == -1:
        print('Nao achei ninguem com esse apelido.')
    else:
        print('Vou apagar o cadastro de ' + jogadores[i][1] + '.')
        print('[1] Confirmar')
        print('[2] Deixar como esta')
        certeza = ler_opcao('Sua escolha', ['1', '2'])

        if certeza == '1':
            jogadores.pop(i)
            print('Cadastro apagado.')
        else:
            print('Nada foi apagado.')

    linha()


def salvar_jogadores(jogadores):
    '''Grava todos os jogadores no arquivo jogadores.csv.'''
    arquivo = open(ARQUIVO, 'w')

    for jogador in jogadores:
        arquivo.write(
            jogador[0] + ',' + jogador[1] + ',' + jogador[2] + '\n'
        )

    arquivo.close()


def carregar_jogadores():
    '''Le o jogadores.csv ou devolve uma lista vazia se ele nao existir.'''
    if not exists(ARQUIVO):
        return []

    arquivo = open(ARQUIVO, 'r')
    linhas = arquivo.readlines()
    arquivo.close()

    lidos = []

    for linha_lida in linhas:
        campos = linha_lida.strip().split(',')

        if len(campos) == 3:
            lidos.append(campos)

    return lidos


def menu_jogadores(jogadores):
    '''Abre o menu das quatro operacoes do cadastro de jogadores.'''
    while True:
        titulo('CADASTRO DE JOGADORES')
        print('[1] Cadastrar jogador')
        print('[2] Listar jogadores')
        print('[3] Alterar nome')
        print('[4] Excluir jogador')
        print('[0] Voltar ao fliperama')
        linha()

        opcao = ler_opcao('Sua escolha', ['0', '1', '2', '3', '4'])

        if opcao == '0':
            break
        elif opcao == '1':
            cadastrar(jogadores)
        elif opcao == '2':
            listar(jogadores)
        elif opcao == '3':
            alterar(jogadores)
        else:
            excluir(jogadores)
