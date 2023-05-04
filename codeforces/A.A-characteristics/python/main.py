t = int(input())
for i in range(t):
    user = list(map(int,input().split()))
    n = user[0]
    k = user[1]
    found = False
    for ps in range(n//2,n+1):
        ng = n- ps
        if ps>=2 and ng>=2:
            test = ((ps)*(ps-1)/2)+((ng)*(ng-1)/2)
            if test == k:
                found = True
                break
        elif ps>=2:
            test = ((ps)*(ps-1)/2)
            if test == k:
                found = True
                break
        elif ng>=2:
            test = ((ng)*(ng-1)/2)
            if test == k:
                found = True
                break
        else:
            test = 0
            if test == k:
                found = True
                break
    if found:
        print('YES')
        while(ps):
            print('1 ',end="")
            ps = ps-1
        while(ng):
            print('-1 ',end="")
            ng = ng-1
        print()
    else:
        print('NO')


