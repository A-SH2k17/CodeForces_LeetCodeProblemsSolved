n = int(input())
arr = [0]*n
user = input().split()
j = 1
for i in user:
    arr[int(i)-1] = j
    j+=1
for i in arr:
    print(i,end=" ")
print("")