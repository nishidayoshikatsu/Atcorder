a = list(map(int,input().split()))

A = a[0]; B = a[1]; K = a[2]

for i in range(K):
    if i % 2 == 0:
        if A % 2 == 1:
            A -= 1
        cokkie = A / 2
        A -= cokkie
        B += cokkie
    else:
        if B % 2 == 1:
            B -= 1
        cokkie = B / 2
        B -= cokkie
        A += cokkie

print(str(int(A)) + " " + str(int(B)))