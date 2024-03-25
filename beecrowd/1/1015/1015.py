import math
x = []
y = []

for i in range(2):
    line = input().split()
    x.append(float(line[0]))
    y.append(float(line[1]))


print("%.4f" % (math.sqrt(((x[1] - x[0]) ** 2) + ((y[1] - y[0]) ** 2))))
