N = int(input())
a = []
for _ in range(N):
    a.append(int(input()))

cnt = 0
for n in a:
    if n % 2 == 1:
        cnt += 1

if cnt % 2 == 1 and cnt <= 2:
    print("first")
else:
    print("second")