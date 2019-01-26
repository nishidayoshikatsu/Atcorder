if __name__ == "__main__":
    N, T = map(int,input().split(' '))
    c = []
    t = []
    for i in range(N):
        c1, t1 = [int(i) for i in input().split(' ')]
        c.append(c1)
        t.append(t1)

    min = "None"
    for i in range(N):
        if T >= t[i]:
            if min == "None":
                min = c[i]
            else:
                if min > c[i]:
                    min = c[i]
    if min == "None":
        print("TLE")
    else:
        print(min)
    '''
    try:
        print(min)
    except NameError:
        print("TLE")
    '''