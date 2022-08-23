n,h = input().split()
miniimum = 0
list_input = input().split()
for i in list_input:
    if int(i) > int(h):
        miniimum+=2
    else:
        miniimum+=1
print(miniimum)