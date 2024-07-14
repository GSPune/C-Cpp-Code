N = 1000000
phi = [i for i in range(N+1)]#from 0 to N

for i in range(2,N+1):
    if phi[i] == i:
        for j in range(i,N+1,i):
            phi[j] -= phi[j]//i

t = int(input())
for i in range(t):
    n = int(input())
    print(phi[n])
