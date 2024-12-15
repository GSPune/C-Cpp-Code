def solve(s):
    newString = ''
    for ch in s[::-1]:
        if ch == 'p':
            newString += 'q'
        elif ch == 'q':
            newString += 'p'
        else:
            newString += 'w'
    print(newString)


testCases = int(input())
for t in range(testCases):
    n = (input())
    solve(n)