n = input()
l = len(n)

if n < '0':
    if n[l - 1] < n[l - 2]:
        number = n[:(l - 2)] + n[l - 1]
        if number == '-0':
            number = '0'
        print(number)
    else:
        number = n[:(l - 1)]
        print(number)
else:
    print(n)
