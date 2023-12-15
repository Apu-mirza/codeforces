t = int(input())
for i in range(t):
    n = int(input())
    quotient = n/2020
    remainder = n%2020
    if(remainder >= 0 and remainder <= quotient):
        print("YES")
    else:
        print("NO")

