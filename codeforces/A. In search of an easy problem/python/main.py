def solve():
    n = input()
    answers = input().split()
    for i in answers:
        if int(i) == 1:
            print("hard")
            return
    print("easy")
solve()