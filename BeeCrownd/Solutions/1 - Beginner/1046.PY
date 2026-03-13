x = input().split()

horainicial = int(x[0])
horafinal = int(x[1])

if horainicial < horafinal:
# Baseado no 2h final - 16h final = 14h
    tempo = horafinal - horainicial
    print(f"O JOGO DUROU {tempo} HORA(S)")
elif horainicial >= horafinal:
# Baseado em que se começa a meia noite e termmina a meia noite se passaram 24h
    tempo = (24 - horainicial) + horafinal
    print(f"O JOGO DUROU {tempo} HORA(S)")
