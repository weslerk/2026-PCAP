'''
Problema: beecrowd | 1047
Data: 2026.05.16
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo calcular a DURAÇAO de um jogo (em horas e minutos), sabendo:
# a hora de inicio (hi:mi) e a hora de fim (hf:mf).
# O jogo dura no MINIMO 1 minuto e no MAXIMO 24 horas.

# --- ANALISE (LIAC) ---
# Entrada: 4 inteiros na mesa linha _ hi mi hf mf (hora/minuto inicial e final)
# Processamento: converter inicio e fim para o total em minutos;
#            se o fim for menor ou igual ao inicio, o jogo "virou a meia_noite"
# saida: " O JOGO DUROU H HORA(S) E M  MINUTOS(S)"

hi, mi, hf, mf = map(int, input().split())

tim = (hi * 60) + mi
tfm = (hf * 60) + mf

if tim > tfm:
    ttm = (tfm - tim) + (24 * 60)
else:
    ttm = tfm - tim

if ttm == 0:
    ttm = 24 * 60

print (f"O JOGO DUROU {ttm // 60} HORA(S) E {ttm % 60} MINUTO(S)")