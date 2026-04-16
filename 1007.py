'''
Problema: beecrowd | 1007
Data: 2026.04.16
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: Ler quatro inteiros e calcular a DIFRENÇA = (A * B) - (C * D)

# --- ANALISE (LIAC) ---
# Entrada: quatro valores inteiros A, B, C e D (um por linha)
# Processamento: diferença entre o produto A*B e o produto C*D
# Saida: "DIFERENCA = valor" (inteiro, letras maisculas, espaços ao redor do =)

A = int(input())
B = int(input())
C = int(input())
D = int(input())

# Calcule a direferença dos produtos comforme a formula do enunciado
dif = (A * B) - (C * D)

print(f"DIFERENCA = {dif}")