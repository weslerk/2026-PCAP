'''
Problema: beecrowd | 1011
Data: 2026.04.07
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: Ler o raio de uma esfera e calcular seu volume com a fórmula (4/3) * pi * R³

# --- ANALISE (LIAC) ---
# Entrada: um número de ponto flutuante (o raio R)
# Processamento: Aplicar a Fórmula do volume da esfera
# Saída: exibir no formato "VOLUME = valor" com 3 casas decimais

# float() : converte o valor lido para numero decimal (ponto flutuante)
R = float(input())

# O enunciado pede para atribuir pi como constante - não usar math.pi
pi = 3.14159

# 4.0/3 garante divisao decimal (nao inteira) - conforme dica do enunciado
# R**3 :R elevado à terceira potência (R³)
V = (4.0 / 3) * pi * R ** 3

# :.3f : formata o numero com exatamente 3 casas decimais
print(f"VOLUME = {V:.3f}")