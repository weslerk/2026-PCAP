# ===========================
# Arquivo: main.py
# Disciplina: 2026-PCAP
# Aula: 20
# Autor: Wesley
# Data: 2026.08.04
# Conceitos:
# ============================

from telas import titulo, linha
from adivinhe import jogar_adivinhe
from modulos import ler_opcao
from ppt import jogar_ppt
from parimpar import jogar_parimpar
from meujogo import jogar_meujogo
from placar import salvar_placar, carregar_placar
from jogadores import (
    salvar_jogadores,
    carregar_jogadores,
    menu_jogadores,
    buscar
)


NOME_DO_DONO = 'WESLEY'
OPCOES = ['0', '1', '2', '3', '4', '5']

NOME_DOS_JOGOS = [
    'ADIVINHE O NUMERO',
    'PEDRA-PAPEL-TESOURA',
    'PAR OU IMPAR',
    'DESAFIO DA TABUADA'
]

vezes_jogado = carregar_placar()
jogadores = carregar_jogadores()


def mostrar_menu():
    titulo('FLIPERAMA DO ' + NOME_DO_DONO)
    print('[1] Adivinhe o Numero')
    print('[2] Pedra-Papel-Tesoura')
    print('[3] Par ou Impar')
    print('[4] Desafio da Tabuada')
    print('[5] Jogadores')
    print('[0] Sair')
    linha()


def mostrar_placar():
    titulo('PLACAR')

    for i in range(len(vezes_jogado)):
        print(NOME_DOS_JOGOS[i] + ': ' + str(vezes_jogado[i]) + 'x')

    linha()


while True:
    mostrar_menu()
    opcao = ler_opcao('Sua escolha', OPCOES)

    if opcao == '0':
        mostrar_placar()
        salvar_placar(vezes_jogado)
        salvar_jogadores(jogadores)
        titulo('ATE A PROXIMA!')
        break

    if opcao == '5':
        menu_jogadores(jogadores)
    else:
        indice = int(opcao) - 1
        vezes_jogado[indice] = vezes_jogado[indice] + 1

        apelido = input('Quem vai jogar (apelido): ').strip().lower()
        i = buscar(jogadores, apelido)

        if i != -1:
            jogadores[i][2] = str(int(jogadores[i][2]) + 1)
        else:
            print('Apelido nao cadastrado. A partida sera aberta mesmo assim.')

        if opcao == '1':
            jogar_adivinhe()
        elif opcao == '2':
            jogar_ppt()
        elif opcao == '3':
            jogar_parimpar()
        else:
            jogar_meujogo()

        input('Pressione Enter para voltar ao menu... ')