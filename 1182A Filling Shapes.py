n=int(input())

if n < 2: 
    print('0')
else:
    if n%2 != 0:
        print('0')
    else:
        ans = pow(2, n//2)
        print(ans)
