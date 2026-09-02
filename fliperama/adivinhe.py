# ===========================
# Arquivo: adivinhe.py
# Disciplina: 2026-PCAP
# Aula: 20
# Autor: Wesley
# Data: 2026.08.04
# Conceitos:
# ============================

# ============================================================
# ARQUIVO   : adivinhe.py (pasta fliperama)
# Base      : jogo da Aula 16
# ============================================================

from random import randint
from telas import titulo, linha
from modulos import ler_numero


def jogar_adivinhe():
    titulo('ADIVINHE O NUMERO')

    numero_secreto = randint(1, 10)
    tentativas = 0

    while True:
        palpite = ler_numero('Seu palpite de 1 a 10', 1, 10)
        tentativas = tentativas + 1

        if palpite == numero_secreto:
            print('Voce acertou em ' + str(tentativas) + ' tentativas!')
            break
        elif palpite < numero_secreto:
            print('O numero secreto e maior.')
        else:
            print('O numero secreto e menor.')

    linha()