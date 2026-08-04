# Concerto 4: trecho dpo "Pedra-Papel-Tesoura" (Aula 17)
jogada = input("pedra, papel ou tesoura? ").lower().strip()
if jogada == "pedra" or jogada == "papel" or jogada == "tesoura":
    print("Jogada válida!", jogada)
else:
    print("Jogada inválida!")