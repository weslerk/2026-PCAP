# ============================================================
# ARQUIVO   : meujogo.py (pasta fliperama)
# Disciplina: Pensamento Computacional, Algoritmos e Programacao
#             (2026-PCAP)
# Aula      : 23 - o jogo autoral do meu Fliperama
# Autor     : Wesley
# Conceitos : reuso de modulo, entrada validada, repeticao e placar
# ============================================================

from random import randint
from telas import titulo, linha
from modulos import ler_numero


def jogar_meujogo():
    '''Faz tres desafios de multiplicacao e vence com dois acertos.'''
    titulo('DESAFIO DA TABUADA')

    pontos = 0

    for rodada in range(1, 4):
        numero_1 = randint(1, 10)
        numero_2 = randint(1, 10)

        print('Rodada ' + str(rodada) + ' de 3')
        resposta = ler_numero(
            'Quanto e ' + str(numero_1) + ' x ' + str(numero_2),
            0,
            100
        )

        if resposta == numero_1 * numero_2:
            pontos = pontos + 1
            print('Acertou!')
        else:
            print(
                'Errou. A resposta era '
                + str(numero_1 * numero_2)
                + '.'
            )

        linha()

    print('Voce fez ' + str(pontos) + ' ponto(s).')

    if pontos >= 2:
        titulo('VOCE VENCEU O DESAFIO!')
    else:
        titulo('TENTE NOVAMENTE!')
