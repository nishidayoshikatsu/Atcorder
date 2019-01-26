N, K = input().split(' ')
N = int(N); K = int(K)

a = list(map(int,input().split()))

sequences = []
for i in range(N):
    for j in range(N-i):
        sequences.append(a[i:i+j+1])

print(sequences)

beautiful = []
for seq in sequences:
    beautiful.append(sum(seq))

maximum = 0
select = []
for i in range(len(sequences)):
    for j in range(len(sequences)):
        select.append(sequences[i+j:i+j+K])

#filter(lambda a: a != [], select)
select = [x for x in select if x]
del_index = []
print(select)
for i,n in enumerate(select):
    print("---")
    print(n)
    print(len(n))
    print("---")
    if len(n) != K:
        print("===")
        print(n)
        print(i)
        del_index.append(n)
        print("===")
    '''
    if n == select[-1]:
        print("last")
        print(i)
        print(n)
        print(len(n))
    '''
for del_i in del_index:
    del_index.remove(del_i)
print("nsd")
print(select)