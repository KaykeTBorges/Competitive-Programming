codigo1, quantidade1, value1 = input().split(" ")
codigo2, quantidade2, value2 = input().split(" ")

codigo1 = int(codigo1)
quantidade1 = int(quantidade1)
value1 = float(value1)

codigo2 = int(codigo2)
quantidade2 = int(quantidade2)
value2 = float(value2)

preco1 = quantidade1 * value1
preco2 = quantidade2 * value2

total = preco1 + preco2

print(f"VALOR A PAGAR: R$ {total:.2f}")