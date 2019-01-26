N = int(input())
S = input()
Q = int(input())
k = list(map(int,input().split()))

li = [c  for c in S]

a = []; b = []; c = []
cnt = 0
k_DMC = 0
for i,c in enumerate(li):
    if c == 'D':
        a.append(i)
    elif c == 'M':
        b.append(i)
    elif c == 'C':
        c.append(i)
    if 