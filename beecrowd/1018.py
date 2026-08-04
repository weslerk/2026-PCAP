'''
Problema Beecrowd | 1018
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: calcular a menor quantidade de cédulas

# --- ANÁLISE (LIAC) ---
# Entrada: valor inteiro N
# Processamento: dividir o valor pelas notas e pegar o resto
# Saída: mostrar quantas notas de cada valor serão usadas

N = int(input())

valor = N

n100 = valor // 100
valor = valor % 100

n50 = valor // 50
valor = valor % 50

n20 = valor // 20
valor = valor % 20

n10 = valor // 10
valor = valor % 10

n5 = valor // 5
valor = valor % 5

n2 = valor // 2
valor = valor % 2

n1 = valor // 1

print(N)
print(f"{n100} nota(s) de R$ 100,00")
print(f"{n50} nota(s) de R$ 50,00")
print(f"{n20} nota(s) de R$ 20,00")
print(f"{n10} nota(s) de R$ 10,00")
print(f"{n5} nota(s) de R$ 5,00")
print(f"{n2} nota(s) de R$ 2,00")
print(f"{n1} nota(s) de R$ 1,00")