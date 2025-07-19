def solve(n, j, k, strength):

    player_strength = strength[j-1]

    count = sum([1 if si > player_strength else 0 for si in strength])
    if k == 1 and count == 0:
        print("YES")
    elif k == 1 and count != 0:
        print("NO")
    else:
        print("YES")
a
testCases = int(input())
for t in range(testCases):
    n, j, k = map(int,input().split())
    strength = list(map(int, input().split()))
    solve(n,j,k,strength)