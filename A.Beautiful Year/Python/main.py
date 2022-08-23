n = int(input())
while True:
    found = True
    arr = [0]*10
    n += 1
    test = n
    while test != 0:
        if arr[int(test)%10]:
            found = False
            break
        arr[int(test)%10]=True
        test//=10
    if found:
        break
print(n)
