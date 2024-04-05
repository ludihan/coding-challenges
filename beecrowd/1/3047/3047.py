def max(A, B, C):
    max = A
    if B > max:
        max = B
    if C > max:
        max = C

    return max


M = int(input())
A = int(input())
B = int(input())
C = M - (A + B)
n = max(A, B, C)
print(n)
