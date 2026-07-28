# Concerto 1: trecho do "adivinhe o numero" (Aula 16)
print("=== ADIVINHE O NUMERO ===")
segredo = 7
palpite = input("Digite um numero de 1 a 10: ")
if int(palpite) == segredo:
    print("Acertou!")
else:
    print("Errou! segredo era", segredo)