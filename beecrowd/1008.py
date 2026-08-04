'''
Problema: beecrowd | 1008
Data: 2026.04.07
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: 

# --- ANALISE (LIAC) ---
# Entrada: nome (texto), salario fixo (float), total de vendas efetuadas (float)
# Processamento: 
# Saida: exibir no formato exato "SAL" = R$ valor" com 2 casas decimais

# Leitura das entradas - observe o enunciado: quantas variaveis e de qual tipo?
N = int(input())
H = int(input())
V = float(input())

#Calcule o salario - use o 1009 como referencia de estrutura    
SAL = H * V

# Saida - Observe o formato exato e o numero de casas no enunciado
print(f"NUMBER = {N}")
print(f"SALARY = U$ {SAL:.2f}")