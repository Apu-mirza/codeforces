t=int(input())
while t>0:
    n,a,b = map(int, input().split())
    str = input()
    count = 0
    for i in range(n-1):
        if str[i] != str[i+1]:
            count += 1
    #if count == 1:
     #   count += 1

    if b>=0:
        ans = n*a+n*b
    else:
        ans = n*a+((count+1)//2+1)*b
    print(ans)

    t -= 1
