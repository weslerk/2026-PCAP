'''
Problema: beecrowd | 1002
Data: 2026.04.07
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo:

# --- ANALISE (LIAC) ---
# Entrada: O valor de um numero de ponto flutuante
# Processamento: aplicar a formula do volume da esfera
# Saida: exibir no formato "AREA = valor" com 3 casas decimais

# Leitura do raio como numero decimal
R = float(input())

# Defina pi conforme o enunciado indica
pi = 3.14159

# Qual é a formula da area do criculo?
AREA = pi * R ** 2 

# Saida - observeo formato exato e o numero de casas decimais no enunciado
print(f"A={AREA:.4f}")