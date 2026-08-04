'''
Problema Beecrowd | 1044
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''

# Objetivo: verificar se dois numeros sao multiplos

# --- ANALISE (LIAC) ---
# Entrada: dois numeros inteiros
# Processamento: descobrir o maior numero e verificar a divisao
# Saida: "Sao Multiplos" ou "Nao sao Multiplos"

a, b = map(int, input().split())

if a > b:
    maior = a
    menor = b
else:
    maior = b
    menor = a

resto = maior % menor

if resto == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")