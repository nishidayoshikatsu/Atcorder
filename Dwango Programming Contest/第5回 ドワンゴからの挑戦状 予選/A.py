N = int(input())

a = list(map(int,input().split()))

sum = 0
for n in a:
    sum += n

ave = float(sum) / N

ans_content = N
for i,n in enumerate(a):
    if ans_content > abs(n-ave):
        ans = i
        ans_content = abs(n-ave)

print(ans)