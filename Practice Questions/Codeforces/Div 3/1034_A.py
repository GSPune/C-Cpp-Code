# A. Blackboard Game
# https://codeforces.com/problemset/problem/1034/A

def solve(n):
    mod_catg = {}
    for i in range(n):
        if i%4 not in mod_catg:
            mod_catg[i%4] = 1
        else:
            mod_catg[i%4] += 1
    print(mod_catg)

testCases = int(input())
for t in range(testCases):
    n = int(input())
    solve(n)