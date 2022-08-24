roman = input()
integer = 0
sz = len(roman)
for i in range(sz):
    if(roman[i]=="I"):
        integer += 1
    elif(roman[i]=="V"):
        integer += 5
    elif(roman[i]=="X"):
        integer += 10
    elif(roman[i]=="L"):
        integer += 50
    elif(roman[i]=="C"):
        integer += 100
    elif(roman[i]=="D"):
        integer += 500
    elif(roman[i]=="M"):
        integer += 1000
    if(not i==sz-1):
        if((roman[i]=='I' and roman[i+1]=='V') or (roman[i]=='I' and roman[i+1]=='X')):
                integer-=2
        if((roman[i]=='X' and roman[i+1]=='L') or (roman[i]=='X' and roman[i+1]=='C')):
                integer-=20
        if((roman[i]=='C' and roman[i+1]=='D') or (roman[i]=='C' and roman[i+1]=='M')):
                integer-=200
print(integer) 