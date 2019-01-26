def change(fig):
    sum = 0
    a = 100
    for keta in fig:
        if keta == 1:
            keta = 9
        elif keta == 9:
            keta = 1
        sum += keta * a
        a /= 10
    return sum
        
if __name__ == "__main__":
    n = input()
    fig = list(map(int, list(n)))
    sum = change(fig)
    print(int(sum))