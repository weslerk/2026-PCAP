'''
Problema Beecrowd | 1017
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: calcular quantos litros de combustivel foram gastos na viagem

# --- ANÁLISE (LIAC) ---
# Entrada: tempo da viagem e velocidade media
# Processamento: calcular a distancia e dividir por 12
# Saída: mostrar a quantidade de litros com 3 casas decimais

tempo = int(input())
velocidade = int(input())

distancia = tempo * velocidade

litros = distancia / 12

print(f"{litros:.3f}")