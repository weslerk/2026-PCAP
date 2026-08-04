'''
Problema Beecrowd | 1020
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''

# Objetivo: mostrar quantos anos, meses e dias se baseando em dias

# --- ANÁLISE (LIAC) ---
# Entrada: digitar os dias
# Processamento: mostrar anos meses e dias, usando como base nos dias informado
# Saída: mostrar "___ ano(s)" "___ meses(es)" "___ dia(s)"

dias = int(input())

anos = dias // 365
resto_anos = dias % 365

meses = resto_anos // 30
dias_finais = resto_anos % 30

print(anos, "ano(s)")
print(meses, "mes(es)")
print(dias_finais, "dia(s)")