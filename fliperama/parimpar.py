# ════════════════════════════════════════════════════════════
# Disciplina : Pensamento Computacional, Algoritmos e Programação (PCAP)
# Projeto    : Jogo "Par ou Ímpar"
# Arquivo    : par_impar.py
# Autor      : wesley
# Data       : 18/08/2026
# ════════════════════════════════════════════════════════════

from random import randint
from telas import titulo, linha
from modulos import ler_numero


def quem_venceu(soma, aposta):
    if soma % 2 == 0:
        paridade = 'par'
    else:
        paridade = 'impar'

    if paridade == aposta:
        return 'jogador'
    else:
        return 'computador'


def jogar_parimpar():
    titulo('PAR OU IMPAR')

    pontos_jogador = 0
    pontos_computador = 0

    for rodada in range(1, 6):
        print('RODADA ' + str(rodada))
        linha()

        dedos_computador = randint(0, 5)
        dedos_jogador = ler_numero('Escolha um numero de 0 a 5', 0, 5)

        aposta = input('Aposte em par ou impar: ').lower().strip()

        while aposta not in ['par', 'impar']:
            print('Aposta invalida!')
            aposta = input('Aposte em par ou impar: ').lower().strip()

        soma = dedos_jogador + dedos_computador
        vencedor = quem_venceu(soma, aposta)

        print('Voce jogou ' + str(dedos_jogador) + '.')
        print('O computador jogou ' + str(dedos_computador) + '.')
        print('A soma foi ' + str(soma) + '.')

        if vencedor == 'jogador':
            pontos_jogador = pontos_jogador + 1
            print('Voce venceu a rodada!')
        else:
            pontos_computador = pontos_computador + 1
            print('O computador venceu a rodada!')

        print(
            'Placar: Voce '
            + str(pontos_jogador)
            + ' x '
            + str(pontos_computador)
            + ' Computador'
        )
        linha()

    if pontos_jogador > pontos_computador:
        titulo('VOCE VENCEU A PARTIDA!')
    else:
        titulo('O COMPUTADOR VENCEU A PARTIDA!')
