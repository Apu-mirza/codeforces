t=int(input())
while t>0:
    n = int(input())
    element1 = 1
    count = 1
    total = 1
    for i in range(n):
        if total < n:
            element1 += 2
            count += 1
        else: 
            break
        total += element1
    print(count)

    t -= 1
