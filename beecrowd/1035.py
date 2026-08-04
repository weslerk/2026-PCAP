'''
Problema Beecrowd | 1035
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigue
'''
# Objetivo: verificar se os valores seguem as regras do problema

# --- ANÁLISE (LIAC) ---
# Entrada: quatro numeros inteiros
# Processamento: analisar as condições pedidas
# Saída: exibir se os valores foram aceitos ou nao

A, B, C, D = input().split()

A = int(A)
B = int(B)
C = int(C)
D = int(D)

aceito = False

if B > C:
    if D > A:
        if C + D > A + B:
            if C > 0 and D > 0:
                if A % 2 == 0:
                    aceito = True

if aceito:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")