'''
Problema Beecrowd | 1010
Data: 2026.05.17
Estudante: Wesley Gustavo dos santos Rodrigues
'''
# Objetivo: calcular o valor total da compra

# --- ANÁLISE (LIAC) ---
# Entrada: dados de duas pecas com codigo, quantidade e preco
# Processamento: fazer o calculo do valor de cada peca e somar
# Saída: exibir o total que deve ser pago

cod1, qtd1, val1 = input().split()

qtd1 = int(qtd1)
val1 = float(val1)

cod2, qtd2, val2 = input().split()

qtd2 = int(qtd2)
val2 = float(val2)

total1 = qtd1 * val1
total2 = qtd2 * val2

total = total1 + total2

print(f"VALOR A PAGAR: R$ {total:.2f}")