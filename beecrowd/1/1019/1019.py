segundos = 0
tempo = [60 ** 2, 60, 1]

segundos = int(input())

for i in range(len(tempo)):
    v = tempo[i]
    tempo[i] = segundos // v
    segundos -= tempo[i] * v

print("%d:%d:%d" % (tempo[0], tempo[1], tempo[2]))
