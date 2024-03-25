dinheiro = int(input())
quantidade = 0

notas = [100, 50, 20, 10, 5, 2, 1]

print(dinheiro)

for i in range(len(notas)):
    quantidade = dinheiro // notas[i]
    dinheiro -= quantidade * notas[i]
    print("%d nota(s) de R$ %d,00" % (quantidade, notas[i]))
