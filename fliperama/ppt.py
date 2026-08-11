#
# ARQUIVO : ppt.py (pasta fliperama)
# Conceito : Jogo com Modulo, lista como tabela de nomes funcao com retorno, operador @ para dar a volta
# Base : Jogo da Aula 17 (atividade 11)
# Autor : Wesley
# Data : 11.08.2026
#

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
    titulo('PEDRA - PAPEL - TESOURA')

    pontos_jogador = 0
    pontos_computador = 0

    while pontos_jogador < 2 and pontos_computador < 2:
        mostrar_jogadas()

        jogador = int(ler_opcao('Sua Jogada', ['0', '1', '2']))
        computador = randint(0, 2)

        print('Você Jogou' + JOGADAS[jogador] + '.')
        print('Computador Jogou' + JOGADAS[computador] + '.')

        resultado = quem_vence(jogador, computador)

        if resultado == 'empate':
            print('Empate! Ninguém venceu!')
        elif resultado == 'jogador':
            print('Você venceu essa rodada!')
        elif resultado == 'computador':
            pontos_computador += 1
            pontos_jogador += 1
            print('Computador venceu essa rodada!')

        linha()
        print(f'placar: Jogador {pontos_jogador} X {pontos_computador} Computador') 
        linha()

    if pontos_jogador > pontos_computador:
        titulo('YOU WIN!')
    else:
        titulo('YOU LOSE!')

jogar_ppt()