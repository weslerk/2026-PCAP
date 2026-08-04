'''
Problema Beecrowd | 1037
Data: 2026.05.16
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: ler um valor e dizer em qual intervalo ele se encontra

# --- ANÁLISE (LIAC) ---
# Entrada: um número de ponto flutuante qualquer
# Processamento: verificar em qual dos intervalos o valor se enquadra
# [0,25]    - 0 <= valor <= 25
# (25,50]   - 25 < valor <= 50
# (50,75]   - 50 < valor <= 75
# (75,100]  - 75 < valor <= 100
# fora      - qualquer outro valor
# Saída: mensagem com o intervalo correspondente ou "Fora de intervalo"

valor = float(input())

if 0 <= valor <= 25:
    print("Intervalo [0,25]")
elif 25 < valor <= 50:
    print("Intervalo (25,50]")
elif 50 < valor <= 75:
    print("Intervalo (50,75]")
elif 75 < valor <= 100:
    print("Intervalo (75,100]")
else:
    print("Fora de intervalo")