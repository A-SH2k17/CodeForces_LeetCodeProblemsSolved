a = input()
b= input()
size = len(a)
for i in range (0,size):
    if a[i]==b[i]:
        print(0,end="")
    else:
        print(1,end="")
print()