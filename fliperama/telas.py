# ===========================
# Arquivo: telas.py
# Disciplina: 2026-PCAP
# Aula: 20
# Autor: Wesley
# Data: 2026.08.04
# Conceitos:
# ============================

CAR = '='
TAM = 60

def linha():
    print(CAR * TAM)

def titulo(texto):
    linha()
    print(texto.center(TAM))
    linha()