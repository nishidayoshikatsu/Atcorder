def exchange(v):
    cnt = 0
    pattern2 = 0
    for (i, num) in enumerate(v):
        if i == 0:
            pattern1 = num
        elif i % 2 == 0:
            if pattern1 != num:
                cnt += 1
        elif i % 2 == 1:
            if pattern2 == 0:
                if num != pattern1:
                    pattern2 = num
                else:
                    cnt += 1
            elif pattern2 != num:
                cnt += 1
    return cnt

        

if __name__ == "__main__":
    n = int(input())
    v = list(map(int,input().split()))
    print(exchange(v))