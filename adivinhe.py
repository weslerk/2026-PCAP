# =========================================================================
# Disciplina  : Pensamento computacional, algoritmos e Programação (PCAP)
# Projeto     : Jogo "Adivinhe o Numero"
# Arquivo     : adivinhe.py
# Autor       : Wesley Gustavo Dos Santos Rodrigues
# Data        : 25/06/2026
# =========================================================================

import random

def jogar(maximo, chances):
Numero_secreto = random.randint(1, maximo)
acertou = False

        while chances > 0 and not acertou:
            palpite = int(input("Digite um numero de 1 a " + str(maximo) + "): "))

            if palpite == Numero_secreto:
                print(":O Acertou! O Numero era", Numero_secreto)
                acertou = True
            elif palpite < Numero_secreto:
                print(":( Muito Baixo! Tente um numero maior seu loser.")
            else:
                print(" :x Muito Alto! Tente um numero menor.")

    chances = chances - 1 
    print("Chances restantes:", chances)

    return acertou

venceu = jogar(10, 3)
if not venceu:
    print(" Fim de Jogo!")