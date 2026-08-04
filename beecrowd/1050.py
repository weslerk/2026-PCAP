'''
Problema Beecrowd | 1050
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: mostrar a cidade de acordo com o DDD

# --- ANÁLISE (LIAC) ---
# Entrada: um número inteiro, que é o DDD
# Processamento: comparar o DDD com a tabela
# Saída: mostrar a cidade ou "DDD nao cadastrado"

ddd = int(input())

if ddd == 61:
    print("Brasilia")
elif ddd == 71:
    print("Salvador")
elif ddd == 11:
    print("Sao Paulo")
elif ddd == 21:
    print("Rio de Janeiro")
elif ddd == 32:
    print("Juiz de Fora")
elif ddd == 19:
    print("Campinas")
elif ddd == 27:
    print("Vitoria")
elif ddd == 31:
    print("Belo Horizonte")
else:
    print("DDD nao cadastrado")