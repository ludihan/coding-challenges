dinheiroF = float(input())
dinheiro = 0
valores = [10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1]
dinheiro = int(dinheiroF * 100)
print("NOTAS:")

for i in range(len(valores)):
    v = valores[i]
    valores[i] = dinheiro // v
    dinheiro -= valores[i] * v
    if i < 6:
        print("%d nota(s) de R$ %.2f" % (valores[i], v / 100))
    else:
        if i == 6:
            print("MOEDAS:")
        print("%d moeda(s) de R$ %.2f" % (valores[i], v / 100))
