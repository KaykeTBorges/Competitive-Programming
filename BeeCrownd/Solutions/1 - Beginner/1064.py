soma = 0
media = 0

for k in range(0, 6):
    a = float(input())
    if a > 0:
        soma += 1
        media += a
    else:
        soma += 0
        media += 0

media = media / soma
        
print(f"{soma} valores positivos")
print(f"{media:.1f}")