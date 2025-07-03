# A. Blackboard Game
# https://codeforces.com/problemset/problem/1034/A

def solve(n):
    mod_catg = {}
    for i in range(n):
        if i%4 not in mod_catg:
            mod_catg[i%4] = 1
        else:
            mod_catg[i%4] += 1

    pairs = min(mod_catg[0],mod_catg.get(3, 1)) + min(mod_catg.get(1, 0),mod_catg.get(2, 1))
    # print(f"Pairs: {pairs} & mod_catg: {mod_catg}")
    if n >= 4:
        if n % (2*pairs) != 0:
            print("Alice")
        else:
            if n % 2 == 0:
                print("Bob")
            else:
                print("Alice")
        # print(mod_catg)
    else:
        print("Alice")

testCases = int(input())
for t in range(testCases):
    n = int(input())
    solve(n)