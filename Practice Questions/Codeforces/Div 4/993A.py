def solve(n):
    c = 0
    i, j  = 1, n
    while(i < j):
        sumij = i+j
        if sumij == n:
            # print(f'i={i} & j= {j}')
            c += 2
            j -= 1
        elif sumij > n:
            j -= 1
        else:
            i += 1
    print(c+1 if n%2==0 else c)


testCases = int(input())
for t in range(testCases):
    n = int(input())
    solve(n)