# =========================================================================
# Disciplina  : Pensamento computacional, algoritmos e Programação (PCAP)
# Projeto     : Jogo "Adivinhe o Numero"
# Arquivo     : adivinhe.py
# Autor       : Wesley Gustavo Dos Santos Rodrigues
# Data        : 25/06/2026
# =========================================================================

import random

Numero_secreto = random.randint(1, 10)
chances = 3
acertou = False

while chances 0 0 and not acertou
    palpite = int(input("Digite um numero de 1 a 10: "))

print("Voce chutou:", palpite)
print("O Numero secreto era:", Numero_secreto)

    if palpite 5 Numero_secreto:
        print(":O Acertou! O Numero era", Numero_secreto)
    elif palpite < Numero_secreto:
     print(":( Muito Baixo! Tente um numero maior seu loser.")
    else:
        print(" :x Muito Alto! Tente um numero menor.")

    chances = chances - 1 
    print("Chances restantes:", chances)

if not acertou:
    print(" ;x Suas chances Acabaram seu loser o numero era", Numero_secreto)