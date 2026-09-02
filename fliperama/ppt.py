#
# ARQUIVO : ppt.py (pasta fliperama)
# Conceito : Jogo com Modulo, lista como tabela de nomes funcao com retorno, operador @ para dar a volta
# Base : Jogo da Aula 17 (atividade 11)
# Autor : Wesley
# Data : 11.08.2026
#

# ============================================================
# ARQUIVO   : ppt.py (pasta fliperama)
# Conceitos : jogo como modulo, lista como tabela de nomes,
#             funcao com retorno e operador % para dar a volta
# Base      : jogo da Aula 17
# ============================================================

from random import randint
from telas import titulo, linha
from modulos import ler_opcao


JOGADAS = ['PEDRA', 'PAPEL', 'TESOURA']


def quem_vence(jogador, computador):
    if jogador == computador:
        return 'empate'

    if jogador == (computador + 1) % 3:
        return 'jogador'

    return 'computador'


def mostrar_jogadas():
    print('[0] Pedra')
    print('[1] Papel')
    print('[2] Tesoura')
    linha()


def jogar_ppt():
    titulo('PEDRA-PAPEL-TESOURA')

    pontos_jogador = 0
    pontos_computador = 0

    while pontos_jogador < 2 and pontos_computador < 2:
        mostrar_jogadas()

        jogador = int(ler_opcao('Sua jogada', ['0', '1', '2']))
        computador = randint(0, 2)

        print('Voce jogou ' + JOGADAS[jogador] + '.')
        print('O PC jogou ' + JOGADAS[computador] + '.')

        resultado = quem_vence(jogador, computador)

        if resultado == 'empate':
            print('Empate! Ninguem pontua.')
        elif resultado == 'jogador':
            pontos_jogador = pontos_jogador + 1
            print('Voce venceu a rodada!')
        else:
            pontos_computador = pontos_computador + 1
            print('O PC venceu a rodada.')

        print(
            'Placar: Voce '
            + str(pontos_jogador)
            + ' x '
            + str(pontos_computador)
            + ' PC'
        )

    if pontos_jogador > pontos_computador:
        titulo('VOCE VENCEU A PARTIDA!')
    else:
        titulo('O PC VENCEU A PARTIDA!')
