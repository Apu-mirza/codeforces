x=int(input())
if x == 0:
    ans = 1
else:
    power = x%4
    if power == 1:
        ans = 8
    elif power == 2:
        ans = 4
    elif power == 3:
        ans = 2
    elif power == 0:
        ans = 6
print(ans)
