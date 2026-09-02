# ===========================
# Arquivo: modulos.py
# Disciplina: 2026-PCAP
# Aula: 20
# Autor: Wesley
# Data: 2026.08.04
# Conceitos:
# ============================

def ler_opcao(mensagem, validas):
    # So devolve quando a resposta estiver na lista de validas.
    resposta = input(mensagem + ': ').strip()

    while resposta not in validas:
        print('Opcao invalida! Tente de novo.')
        resposta = input(mensagem + ': ').strip()

    return resposta


def ler_numero(mensagem, minimo, maximo):
    # Monta a lista de numeros aceitos e reaproveita a ler_opcao.
    numeros = []

    for n in range(minimo, maximo + 1):
        numeros.append(str(n))

    return int(ler_opcao(mensagem, numeros))


def ler_texto(mensagem):
    # So devolve quando a resposta nao estiver vazia.
    resposta = input(mensagem + ': ').strip()

    while resposta == '':
        print('Nao pode ficar em branco! Tente de novo.')
        resposta = input(mensagem + ': ').strip()

    return resposta