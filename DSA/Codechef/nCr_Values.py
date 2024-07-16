N = 10
MOD = 1e9+7
# a = [0 for _ in range(N+1)]
ncr = [[0 for _ in range(N+1)] for _ in range(N+1)]
#A correct way to declare a matrix/vector<vector>/2d array

ncr[0][1] = 1
for i in range(1,N+1):
    ncr[i][0] = 1
    ncr[i][i] = 1
    for j in range(1,i):
        ncr[i][j] = (ncr[i-1][j] + ncr[i-1][j-1])%MOD

print(ncr)

