import numpy as np

def calc(mat, h, N):
    mat = np.array(mat)
    h = np.array(h)
    #for i in range(N):

if __name__ == "__main__":
    N = int(input())
    x = []
    y = []
    h = []
    for i in range(N):
        x1, y1, h1 = [int(i) for i in input().split()]
        x.append(x1)
        y.append(y1)
        h.append(h1)
    mat = []
    for i in range(N):
        mat.append([x[i], y[i]])

    calc(mat, h, N)