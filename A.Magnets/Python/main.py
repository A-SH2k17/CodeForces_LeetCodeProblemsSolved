#comparing numbers is faster than comparing strings thats why typecast is needed otherwise time limit error will occur

n,groups = int(input()),1
prev = input()
for i in range (1,n):
    user = input()
    if user != prev:
        prev = user
        groups +=1
print(groups)