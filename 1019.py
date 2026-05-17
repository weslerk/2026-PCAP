'''
Problema Beecrowd | 1019
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos RODRIGUES
'''

# Objetivo: converter segundos em horas minutos e segundos

# --- ANÁLISE (LIAC) ---
# Entrada: escrever a quantidade de segundos
# Processamento: transcrever horas minutos e segundos em uma disivao ineira e modllos
# Saída: mostrar horas minutos segundos sem os zeros

N = int(input())
h = N // 3600
N = N % 3600
m = N // 60
s = N % 60
print(f"{h}:{m}:{s}")