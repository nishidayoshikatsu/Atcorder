N = int(input())

A = []
for i in range(N):
    A.append(int(input()))

A.sort()
difference = 0
cnt = 0
flag = 0
while A:
    cnt += 1
    if N % 2 == 1:
        if cnt % 2 == 1 and flag == 0:
            A_min = min(A)
            A.remove(A_min)
            A_max1 = A[-1]
            A_max2 = A[-2]
            difference += A_max1 - A_min
            difference += A_max2 - A_min
            if N == 3:
                break
        else:
            A_max = max(A)
            A.remove(A_max)
            A_min = min(A)
            A.remove(A_min)
            difference += A_max - A_min
            flag += 1
            if flag == 2:
                flag = 0
    else:
        if cnt % 2 == 1 and flag == 0:
            A_min = min(A)
            A_max = max(A)
            difference += A_max - A_min
            if N == 2:
                break
        else:
            A_min2 = A[1]
            difference += A_max - A_min2
            A.remove(A_max)
            A_max2 = max(A)
            difference += A_max2 - A_min
            A.remove(A_min)
            flag += 1
            A_max = A_max2
            A_min = A_min2
            if flag == 2:
                flag = 0

print(difference)