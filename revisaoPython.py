# Fundamentos da programaçao
# Aluno: Wesley
# data: 28/07/2026
#  Fundamentos de Programaçao
#   1. Variaveis e tipos de dados
#   int São numeros inteiros, exemplo
A = int(input("Digite um valor inteiro: "))
B = int(input("Digite outro valor inteiro: "))
C = A + B
# float Sao numeros decimais, com casas apos a virgula, exemplo
D = float(input("Digite um valor decimal: "))
E = float(input("Digite outro valor decimal: "))
F = D + E
# String sao textos, exemplo
G = str(input("Digite um texto: "))
H = str(input("Digite outro texto: "))
I = G + H
# Booleano sao valores logicos, exemplo
J = bool(input("Digite um valor booleano: "))
K = bool(input("Digite outro valor booleano: "))
L = J and K
#   2. Operadores
#   sao simbolos que realizam operaçoes, exemplo + Adiçao, - Subtraçao, * Multiplicaçao, / Divisao, % Resto da Divisao, ** Potenciaçao, // Divisao Inteira

#   3. Entrada de Dados
# input ele manda uma mensagem para o computador
input("Digite um valor: ")

#   4. Saida de dados
# print ele mostra uma mensagem para o usuario
print("Hello World")

#   5. Estrutura de Repetiçao
#   while ele repete um bloco de codigo enquanto uma condiçao for verdadeira, exemplo
while True:
    print("Hello World")
#  for ele repete um bloco de codigo um numero determinado de vezes, exemplo
for i in range(10):
    print("Hello World")

#   6. Estrutura de Condiçao
#   if ele executa um bloco de codigo se uma condiçao for verdadeira, exemplo
if True:
    print("Hello World")
#   elif ele so executa se a condiçao do if for falsa, exemplo
elif False:
    print("Hello World")
#   else ele so executa se todas as condiçoes anteriores forem falsas, exemplo
else:
    print("Hello World")

#   7. sub rotinas