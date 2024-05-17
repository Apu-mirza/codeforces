t=int(input())
while t>0:
    a, b, c = map(int, input().split())
    sum = a+b+c
    if sum%2 == 0:
        if a+b >= c:
            print(sum//2)
        else:
            print(a+b)
    else:
        print(-1)
    t -= 1
