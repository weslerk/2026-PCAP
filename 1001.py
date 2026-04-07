'''
Problema: beecrownd | 1001
Data: 2026.04.07
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: Entender Dois inteiros Nas Variáveis A e B, Calcular a soma em X e exibir o resultado

#--- ANALISE (LIAC)
# Entrada: Dois Números inteiros, Cada um em uma linha separada
# Processamento: somar A + B e Armazenar em X
# Saida: exibir no formato exato "X = valor" (espaços ao redor do =, sem mensagens extras)

#int()     : Conveter A e B para um numero inteiro
#imput()    : Ler o valor fornecido (digitado ou pelo beecrowd)
#int(input()) : Ler e converter em uma unica instruçao
A = int(input())
B = int(input())

# o enunciado especifica explicitamente as variaveis A, B e X - seguir á risca
X = A + B

# f-string: insere o valor de X dentro do texto com{}
# Atenção: espaço antes e depois do = é obrigatorio conforme o enunciado
print(f"X = {X}")