def maiorAB(A, B):
    return ((A + B + abs(A - B))) / 2

num = []
line = input().split()
for x in range(3):
    num.append(int(line[x]))

maior = maiorAB(num[0], num[1])
maior = maiorAB(maior, num[2])

print("%d eh o maior" % maior)
