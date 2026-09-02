# ==============================================================
# ARQUIVO: placar.py (pasta fliperama)
# Conceitos : Arquivo de texto, modo de abertura, write, close
# ==============================================================


from os.path import exists


ARQUIVO = 'placar.csv'

NOMES = [
    'ADIVINHE O NUMERO',
    'PEDRA-PAPEL-TESOURA',
    'PAR OU IMPAR',
    'DESAFIO DA TABUADA'
]

def salvar_placar(vezes):
    arquivo = open(ARQUIVO, 'w')

    for i in range(len(vezes)):
        arquivo.write(NOMES[i] + ',' + str(vezes[i]) + '\n')

    arquivo.close()


def carregar_placar():
    if not exists(ARQUIVO):
        return [0, 0, 0, 0]

    arquivo = open(ARQUIVO, 'r')
    linhas = arquivo.readlines()
    arquivo.close()

    vezes = []

    for linha_lida in linhas:
        campos = linha_lida.strip().split(',')

        if len(campos) == 2:
            vezes.append(int(campos[1]))

    # Completa um placar antigo que ainda tenha somente tres jogos.
    while len(vezes) < len(NOMES):
        vezes.append(0)

    return vezes[:len(NOMES)]
