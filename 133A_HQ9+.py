p = input()
n = len(p)
flag = 0
for i in range(0, n):
    if p[i] == 'H' or p[i] == 'Q' or p[i] == '9':
        flag=1
        break
    else:
        flag=0
if flag==1:
    print("YES")
else:
    print("NO")
