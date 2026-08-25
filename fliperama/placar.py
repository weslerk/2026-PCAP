# ==============================================================
# ARQUIVO: placar.py (pasta fliperama)
# Conceitos : Arquivo de texto, modo de abertura, write, close
# ==============================================================

from os.path import exists

ARQUIVO = 'placar.csv'
NOMES = ['Adivinhe o Numero', 'Pedra-Papel-Tesoura', 'Par ou Impar']

def salvar_placar(vezes):
    arquivo = open(ARQUIVO, 'w')
    for i in range(3):
        arquivo.write(NOMES[i] + ',' + str(vezes[i]) + '\n')
    arquivo.close()

def carregar_placar():
    if not exists(ARQUIVO):
        return [0, 0, 0]
    arquivo = open(ARQUIVO, 'r')
    linhas = arquivo.readlines()
    arquivo.close()

    vezes = []
    for linha_lida in linhas:
        pedacos = linha_lida.strip().split(',')
        vezes.append(int(pedacos[1]))
    return vezes