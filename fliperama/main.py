# ===========================
# Arquivo: main.py
# Disciplina: 2026-PCAP
# Aula: 20
# Autor: Wesley
# Data: 2026.08.04
# Conceitos:
# ============================

import modulos
from telas import titulo, linha
from adivinhe import jogar_adivinhe
from modulos import ler_opcao
from ppt import jogar_ppt
from placar import salvar_placar, carregar_placar

NOME_DO_DONO = 'WESLEY'
OPCOES = ['0', '1', '2']
NOME_DOS_JOGOS = ['ADIVINHE O NUMERO', 'PEDRA-PAPEL-TESOURA', 'PAR OU IMPAR']
vezes_jogados = carregar_placar()

def mostrar_placar():
    titulo('PLACAR')
    for i in range(3):
        print(NOME_DOS_JOGOS[i] + ': ' + str(vezes_jogados[i]) + 'x')

while True:
    titulo(f'FLIPERAMA DO {NOME_DO_DONO}')
    print('1 - Jogo Adivinhe o Numero')
    print('2 - Jogo Pedra, Papel ou Tesoura')
    print('0 - Sair do Fliperama')
    linha()
    opcao = ler_opcao('Escolha uma opcao', OPCOES)

    if opcao == '0':
        mostrar_placar()
        salvar_placar(vezes_jogados)
        titulo('ate a proxima!')
        break
        
    indice = int(opcao) - 1
    vezes_jogados[indice] = vezes_jogados[indice] + 1

    if opcao == '1':
        jogar_adivinhe()
    elif opcao == '2':
        jogar_ppt()
