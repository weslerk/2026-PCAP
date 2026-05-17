'''
Problema: beecrowd | 1014
Data: 2026.05.14
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: calcular o consumo medio de um automovel em km/l

#--- ANALISE (LIAC) ---
# Entrada: distancia percorrida (inteiro em km) e combustivel gasto (float, em litros)
# Processamento: consumo = X / Y
# Saida: consumo com 3 casas decimais seguido de " km/l"

X = int(input())

Y = float(input())

consumo = X / Y

print(f"{consumo:.3f} km/l")
