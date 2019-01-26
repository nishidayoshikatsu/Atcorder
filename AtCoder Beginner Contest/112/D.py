import fraction

def gcd(a):


if __name__ == "__main__":
    N, M = map(int,input().split(' '))

    a = []
    for i in range(2, M):
        for j in range(i, M):
            k = M - i - j
            