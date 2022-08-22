n, anton, danik = int(input()),0,0
winner = input()
for i in winner:
    if i=='D':
        danik +=1
    else:
        anton +=1
if anton>danik:
    print("Anton")
elif danik>anton:
    print("Danik")
else:
    print("Friendship")