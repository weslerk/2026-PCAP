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

niveis = [
    ["fácil", 10, 3],
    ["medio", 100, 5],
    ["impossivel", 1000, 10],
]

print("Escolha o nível de dificuldade:")
print("1 - facil        (1 a 10, 3 chances)")
print("2 - medio        (1 a 100, 5 chances)")
print("3 - inpossivel   (1 a 1000, 10 chances)")
opcao = int(input2("Digite 1, 2 ou 3: "))

nivel = niveis[opcao - 1]

print("Voce escolheu o nivel:", nivel[0])
venceu = jogar(nivel[1], nivel[2])

if not venceu:
    print("Fim de jogo! Tente um nivel mais facil. ")