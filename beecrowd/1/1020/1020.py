d = int(input())
print("%d ano(s)" % (d // 365))
d = d % 365
print("%d mes(es)" % (d // 30))
d = d % 30
print("%d dia(s)" % d)
