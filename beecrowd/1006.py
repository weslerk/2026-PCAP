'''
Problema: beecrowd | 1006
Data: 2026.05.16
Estudante: Wesley Gustavo Dos Santos Rodrigues
'''

#Objeitvo: dizer a media das notas

# --- ANÁLISE (LIAC) ---
# Entrada: as notas
# Processamento: some todas as notas, e multiplique pelo peso delas e divimos por 3
# Saída: mostrar as media:....

n1 = float(input())
n2 = float(input())
n3 = float(input())

media = (n1 * 2 + n2 * 3 + n3 * 5) / 10

print(f"MEDIA = {media:.1f}")