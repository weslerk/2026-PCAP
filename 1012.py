'''
Problema Beecrowd | 1012
Data: 2026.05.17
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''
# Objetivo: calcular diferentes areas usando os valores A, B e C

# --- ANÁLISE (LIAC) ---
# Entrada: tres numeros reais A, B e C
# Processamento: calcular as areas do triangulo, circulo,
# trapezio, quadrado e retangulo
# Saída: mostrar todas as areas com 3 casas decimais

A, B, C = map(float, input().split())

pi = 3.14159

triangulo = (A * C) / 2
circulo = pi * (C ** 2)
trapezio = ((A + B) * C) / 2
quadrado = B ** 2
retangulo = A * B

print(f"TRIANGULO: {triangulo:.3f}")
print(f"CIRCULO: {circulo:.3f}")
print(f"TRAPEZIO: {trapezio:.3f}")
print(f"QUADRADO: {quadrado:.3f}")
print(f"RETANGULO: {retangulo:.3f}")