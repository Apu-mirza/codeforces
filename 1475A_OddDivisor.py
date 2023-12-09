t = int(input())

for i in range(t):
    n = int(input())
    if n & 1:
        flag = 1
    else:
        div = int(n)
        flag = 0
        while div > 2:
            div //= 2
            if div & 1:
                if n%div == 0:
                    flag = 1
                    break

    if flag == 1:
        print("YES")
    else:
        print("NO")
