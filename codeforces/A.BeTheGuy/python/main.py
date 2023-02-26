s = set()
levels = int(input())
p = input().split(" ")
for i in p[1:]:
    s.add(int(i))
q = input().split(" ")
for i in q[1:]:
    s.add(int(i))
if len(s) == levels:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")