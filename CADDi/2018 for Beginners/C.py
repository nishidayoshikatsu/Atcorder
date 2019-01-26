N, P = map(int, input().split())
num = P
s = 0
prime_factors = []      # 素因数を格納するリスト

if P != 1:
    if N != 1:
        while s==0:
            for i in range(2,P+1):
                if num % i == 0:
                    num /= i
                    if num == 1:
                        s = 1
                    prime_factors.append(i)
                    break

        #print(prime_factors)

        if len(prime_factors) > N:
            #print(prime_factors)
            if prime_factors[len(prime_factors)-N] == prime_factors[-1]:
                print(prime_factors[len(prime_factors)-N] * prime_factors[0])
            else:
                print(prime_factors[len(prime_factors)-N])
        else:
            print(prime_factors[0])
    else:
        print(P)
else:
    print(1)