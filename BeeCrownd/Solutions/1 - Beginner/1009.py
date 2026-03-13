name = str(input())
salary = float(input())
sales = float(input())

comissao = salary + (sales * 0.15)

print(f"TOTAL = R$ {comissao:.2f}")