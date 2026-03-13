x = input().split()
codigo = int(x[0])
quantidade = int(x[1])
valor = 0

if codigo == 1:
    valor = quantidade * 4.00
    print(f"Total: R$ {valor:.2f}")
elif codigo == 2:
    valor = quantidade * 4.5
    print(f"Total: R$ {valor:.2f}")
elif codigo == 3:
    valor = quantidade * 5.0
    print(f"Total: R$ {valor:.2f}")
elif codigo == 4:
    valor = quantidade * 2.0
    print(f"Total: R$ {valor:.2f}")
elif codigo == 5:
    valor = quantidade * 1.5
    print(f"Total: R$ {valor:.2f}")