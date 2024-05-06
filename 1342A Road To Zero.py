t=int(input())
for i in range(t):
    x, y = map(int, input().split())
    a, b = map(int, input().split())
    if x < y:
        if b >= 2*a:
            ans = (x+y)*a
        else:
            ans = x*b+(y-x)*a
    else: 
        if b >= 2*a:
            ans = (x+y)*a
        else:
            ans = y*b+(x-y)*a
    print(ans)
            
