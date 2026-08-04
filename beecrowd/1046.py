'''
Problema: beecrowd | 1046
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: calcular a duração de um jogo em horas

# --- ANALISE (LIAC) ---
# Entrada: hi e hf
# Processamento: calcular o tempo total do jogo
# Saida: mostrar quantas horas o jogo durou

hi, hf = map(int, input().split())

tim = hi * 60
tfm = hf * 60

if tim >= tfm:
    ttm = (tfm - tim) + (24 * 60)
else:
    ttm = tfm - tim

print(f"O JOGO DUROU {ttm // 60} HORA(S)")