c = []
n = []
v = []
for x in range(2):
    line = input().split()
    c.append(int(line[0]))
    n.append(int(line[1]))
    v.append(float(line[2]))

print("VALOR A PAGAR: R$ %.2f" % (n[0] * v[0] + n[1] * v[1]) )
