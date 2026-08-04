'''
Problema: beecrowd | 1009
Data: 09.04.2026
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
#Obejtivo: Ler nome, salario fixo e totl de vendas; calcular e exibir o total a receber

# --- ANALISE (LIAC) ---
# Entrada: nome (texto), salario fixo (float), total de vendas efetuadas (float)
# Processamento: comissao = vendas * 0.15 : total = salario fixo + comissao
#Saida: exibir no formato exato "TOTAL" = R$ valor" com 2 casas decimais

# input() sem conversao : retorna o nome como texto (str)
n = input()

# float(input()) : le valores monetarios (podem ter casas decimais)
s = float(input()) # saalrios fixo
v = float(input()) # total de vendas efetuadas no mes

# O vendedor ganha 15% de comissao sobre o total de vendas 
c = v * 0.15

# Total a receber = salario fixo + comissao
st = s + c

# :.2f dentro da f-strig : formata o numero com exatamente 2 casas decimais
print(f"TOTAL = R$ {st:.2f}")