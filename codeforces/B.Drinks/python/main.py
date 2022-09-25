
n = int(input())
result = 0
input = input().split()
for i in input:
    result += int(i)/100
print(result/n*100)
