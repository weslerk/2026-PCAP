# ===========================
# Arquivo: main.py
# Disciplina: 2026-PCAP
# Aula: 20
# Autor: Wesley
# Data: 2026.08.04
# Conceitos:
# ============================

from telas import titulo, linha
from adivinhe import jogar_adivinhe
from modulos import ler_opcao
NOME_DO_DONO = 'WESLEY'
OPCOES = ['0', '1']

while True:
    titulo(f'FLIPERAMA DO {NOME_DO_DONO}')
    print('1 - Jogo Adivinhe o Numero')
    print('0 - Sair do Fliperama')
    linha()
    opcao = ler_opcao('Escolha uma opcao', OPCOES)

    if opcao == '0':
        print('Ate a Proxima!')
        break
    elif opcao == '1':
        jogar_adivinhe()
    else:
        print('Opcao Invalida! Tente Novamente.')