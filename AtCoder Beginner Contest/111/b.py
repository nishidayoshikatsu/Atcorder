def first_ABC():
    array = []
    for fig in range(1, 10):
        sum = fig * 100 + fig * 10 + fig
        array.append(sum)
    return array

if __name__ == "__main__":
    N = int(input())
    array = first_ABC()
    for select in array:
        if select >= N:
            print(select)
            break