n = int(input())
rooms =0
while n != 0 :
    p ,q = input().split()
    if int(q)-int(p) >= 2:
        rooms +=1
    n -= 1
print(rooms)
