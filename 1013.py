'''
Problema Beecrowd | 1013
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigue
'''
# Objetivo: mostrar o maior número entre três valores

# --- ANÁLISE (LIAC) ---
# Entrada: ler três números inteiros A, B e C
# Processamento: comparar os números para descobrir qual é o maior
# Saída: mostrar o maior número seguido da frase "eh o maior"

A, B, C = map(int, input().split())

if A > B and A > C:
    maior = A
elif B > C:
    maior = B
else:
    maior = C

print(f"{maior} eh o maior")