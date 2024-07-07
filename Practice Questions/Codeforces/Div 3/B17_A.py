#A. Noldbach problem*
import math

n = 1000
# pr = [True*(1001)]
pr = [True for i in range(n+1)]
pr[0] = False
pr[1] = False

#Step 1
for i in range(2,int(math.sqrt(n))+1):
    if(pr[i]):
        for j in range(i*i,n+1,i):
            pr[j] = False

#Step 2 -- vector of primes till 1000
prs = []
for i in range(2,n+1):
    if pr[i]:
        prs.append(i)

#Step3
np = [False for i in range(n+1)]
for i in range(len(prs)-1):
    ele = prs[i] + prs[i+1] + 1
    if ele > n : break;
    if pr[ele]:
        np[ele] = True

#Step 4
N,k = map(int,input().split()) #returns a tuple
c = 0
for i in range(2,N+1):
    if np[i]:
        c+=1
if c>=k:
    print("YES")
else:
    print("NO")



def sieve():
    pass
def solve():
    pass

# t = 1

