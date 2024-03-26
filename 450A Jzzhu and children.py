n, m = map(int, input().split())
arr = list(map(int, input().split()))
arr2 = []
 
for num in arr:
    if num % m != 0:
        arr2.append(num // m + 1)
    else:
        arr2.append(num // m)
 
max_val = arr2[0]
position = 0
 
for i in range(n):
    if max_val <= arr2[i]:
        max_val = arr2[i]
        position = i
 
print(position + 1)
