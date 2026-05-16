'''
Problema: beecrowd | 1005
Data: 2026.05.16
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
#Objetivo: Ler duas notas com pesos diferentes e calcular a media ponderada

# --- ANALISE (LIAC) ---
# Entrada: duas notas de ponto flutuante A e B (Cada uma em uma linha)
# Processamento: Media ponderada = (A * 3.5 + B * 7.5) / 11
# Saida: exibir no formato exato "MEDIA = valor" com 5 casas decimais

A = float(input())
B = float(input())
media = (A * 3.5 + B * 7.5) / 11
print(f"MEDIA = {media:.5f}")