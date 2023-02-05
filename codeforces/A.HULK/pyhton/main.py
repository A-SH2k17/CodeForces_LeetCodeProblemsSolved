m = int(input())
for i in range (1,m+1):
    if(i%2==0):
        print("I love ",end="")
    else:
        print("I hate ",end="")
    if(i!=m):
        print("that ",end="")
print("it")
