'''
Problema Beecrowd | 1038
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: calcular o valor total do lanche

# --- ANÁLISE (LIAC) ---
# Entrada: codigo do item e quantidade
# Processamento: verificar o preco do item e multiplicar pela qtd
# Saída: mostrar o total a pagar

cod, qtd = map(int, input().split())

if cod == 1:
    total = qtd * 4.00
elif cod == 2:
    total = qtd * 4.50
elif cod == 3:
    total = qtd * 5.00
elif cod == 4:
    total = qtd * 2.00
else:
    total = qtd * 1.50

print(f"Total: R$ {total:.2f}")